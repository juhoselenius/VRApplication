using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.Android;
using UnityEngine.SceneManagement;

public class PassDoor : MonoBehaviour
{
    public Animator animator;

    public bool level2DoorOpened = false;

    public bool level3DoorOpened = false;
    public bool brokenDoorClosed = false;
    public bool gameEndDoorOpened = false;

    private void Update()
    {
        if (SceneManager.GetActiveScene().name == "Level2")
        {
            if(GameManager.manager.level2Door && !level2DoorOpened)
            {
                animator.SetBool("OpenDoor", true);
                level2DoorOpened = true;
            }
        }

        if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "Door_Opening")
        {
            if (GameManager.manager.level3Door && !level3DoorOpened)
            {
                animator.SetBool("OpenDoor", true);
                level3DoorOpened = true;
            }
        }

        if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "Door_Broken")
        {
            if (GameManager.manager.brokenDoor && !brokenDoorClosed)
            {
                animator.SetBool("CloseDoor", true);
                brokenDoorClosed = true;
            }
        }

        if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "EndDoor_Opening")
        {
            if (GameManager.manager.gameEndDoor && !gameEndDoorOpened)
            {
                animator.SetBool("OpenDoor", true);
                gameEndDoorOpened = true;
            }
        }
    }
}
