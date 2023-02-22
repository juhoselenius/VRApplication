using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager manager;

    public InputActionReference thrustReference = null;
    public InputActionReference airBrakeReference = null;

    // Level 1 objectives
    private bool dialogueOne = false;
    private bool dialogueTwo = false;
    private bool dialogueThree = false;
    private bool dialogueFour = false;
    private bool dialogueFive = false;
    private bool dialogueSix = false;

    public bool thrusted = false;
    public bool braked = false;
    public bool cubeGrabbed = false;
    public bool cubeReleased = false;
    
    public Animator level1Door;

    // Level 2 objectives
    private bool dialogueTwoOne = false;
    private bool dialogueTwoTwo = false;

    public bool cubeAtPlace = false;
    public bool cylinderAtPlace = false;
    public bool spherecubeAtPlace = false;
    public bool capsuleAtPlace = false;
    public bool sphereAtPlace = false;
    public bool plateAtPlace = false;

    public bool level2Door = false;

    // Level 3 objectives
    public Animator level3Door = null;

    public float counter = 0;
    public bool controlsEnabled = false;

    public int currentLevelIndex = 1;

    private void Awake()
    {
        if (manager == null)
        {
            DontDestroyOnLoad(gameObject);
            manager = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        counter += Time.deltaTime;

        // Level 1 mechanics
        if(SceneManager.GetActiveScene().name == "Level1")
        {
            if(counter > 3 && !dialogueOne)
            {
                dialogueOne = true;
                AudioManager.aManager.Play("Level1_Dialogue1");
            }

            if(counter > 31 && !dialogueTwo)
            {
                dialogueTwo = true;
                AudioManager.aManager.Play("Level1_Dialogue2");
            }

            // Enable controls after dialogue 2
            if(counter > 46 && !controlsEnabled)
            {
                controlsEnabled = true;
            }

            // Controls are enabled and waiting for thrust
            if (counter > 46 && !thrusted && thrustReference.action.ReadValue<float>() == 1)
            {
                thrusted = true;
                counter = 0;
                AudioManager.aManager.Play("Great");
            }

            if (counter > 3 && thrusted && !dialogueThree)
            {
                dialogueThree = true;
                AudioManager.aManager.Play("Level1_Dialogue3");
            }

            if (counter > 3 && thrusted && dialogueThree && !braked && airBrakeReference.action.ReadValue<float>() == 1)
            {
                AudioManager.aManager.Stop("Level1_Dialogue3");
                braked = true;
                counter = 0;
                AudioManager.aManager.Play("Great");
            }

            if (counter > 3 && braked && !dialogueFour)
            {
                dialogueFour = true;
                AudioManager.aManager.Play("Level1_Dialogue4");
            }

            if (braked && cubeGrabbed && !cubeReleased && !dialogueFive)
            {
                AudioManager.aManager.Stop("Level1_Dialogue4");
                dialogueFive = true;
                AudioManager.aManager.Play("Level1_Dialogue5");
            }

            if(braked && cubeReleased && !dialogueSix)
            {
                AudioManager.aManager.Stop("Level1_Dialogue5");
                dialogueSix = true;
                AudioManager.aManager.Play("Level1_Dialogue6");
                level1Door.SetBool("OpenDoor", true);
            }
        }

        // Level 2 mechanics
        if (SceneManager.GetActiveScene().name == "Level2")
        {
            
            if (counter > 2 && !dialogueTwoOne)
            {
                dialogueTwoOne = true;
                AudioManager.aManager.Play("Level2_Dialogue1");
            }

            if(!dialogueTwoTwo && cubeAtPlace && cylinderAtPlace && spherecubeAtPlace && plateAtPlace && sphereAtPlace && capsuleAtPlace)
            {
                AudioManager.aManager.Stop("Level2_Dialogue1");
                dialogueTwoTwo = true;
                AudioManager.aManager.Play("Level2_Dialogue2");
                level2Door = true;
            }
        }
    }
}
