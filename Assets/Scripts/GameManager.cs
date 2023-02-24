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
    private bool dialogueThreeOne = false;
    private bool dialogueThreeTwo = false;
    private bool dialogueThreeThree = false;
    private bool dialogueThreeFour = false;
    private bool dialogueThreeFive = false;

    public bool atTelePad = false;
    public bool teleported = false;
    public bool atTheDoor = false;
    public bool leverPulled = false;
    
    public bool level3Door = false;
    public bool brokenDoor = false;
    public bool gameEndDoor = false;

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

        // Level 3 mechanics
        if (SceneManager.GetActiveScene().name == "Level3")
        {

            if (counter > 1 && !dialogueThreeOne)
            {
                dialogueThreeOne = true;
                AudioManager.aManager.Play("Level3_Dialogue1");
            }

            if (!dialogueThreeTwo && atTelePad)
            {
                AudioManager.aManager.Stop("Level3_Dialogue1");
                dialogueThreeTwo = true;
                controlsEnabled = false;
                AudioManager.aManager.Play("Level3_Dialogue2");
            }

            if (!dialogueThreeThree && teleported)
            {
                AudioManager.aManager.Stop("Level3_Dialogue2");
                AudioManager.aManager.Play("Teleport");
                dialogueThreeThree = true;
                AudioManager.aManager.Play("Level3_Dialogue3");
            }

            if (counter > 8 && !atTheDoor && teleported)
            {
                controlsEnabled = true;
            }

            if (!dialogueThreeFour && atTheDoor)
            {
                AudioManager.aManager.Stop("Level3_Dialogue3");
                dialogueThreeFour = true;
                AudioManager.aManager.Play("Level3_Dialogue4");
                level3Door = true;
                AudioManager.aManager.Play("Wind");
            }

            if (!dialogueThreeFive && leverPulled)
            {
                AudioManager.aManager.Stop("Wind");
                AudioManager.aManager.Stop("Level3_Dialogue4");
                dialogueThreeFive = true;
                AudioManager.aManager.Play("Level3_Dialogue5");
                brokenDoor = true;
                gameEndDoor = true;
            }

        }
    }
}
