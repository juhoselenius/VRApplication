using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PassDoor : MonoBehaviour
{
    public Animator animator;

    public bool level2DoorOpened = false;
    
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

        if (SceneManager.GetActiveScene().name == "Level3")
        {
            GameManager.manager.level3Door = animator;
        }
    }
}
