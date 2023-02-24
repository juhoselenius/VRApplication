using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.SceneManagement;

public class PlayerManager : MonoBehaviour
{
    public InputActionReference thrustReference = null;
    public InputActionReference airBrakeReference = null;
    public Transform leftController;

    public float thrustPower = 1f;
    public float brakePower = 1.25f;

    private Rigidbody rb;

    public GameObject levelChanger;

    public GameObject glassWall;

    private void Awake()
    {
        rb = gameObject.GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if (SceneManager.GetActiveScene().name == "Level3")
        {
            if(transform.position.z > 0.1f && !GameManager.manager.teleported)
            {
                GameManager.manager.teleported = true;
                GameManager.manager.counter = 0;
            }
        }
    }

    private void FixedUpdate()
    {
        // Thrusting
        if(GameManager.manager.controlsEnabled && thrustReference.action.ReadValue<float>() == 1 &&
            (Mathf.Abs(rb.velocity.x) < 1.5f || Mathf.Abs(rb.velocity.y) < 1.5f || Mathf.Abs(rb.velocity.z) < 1.5f))
        {
            rb.AddForce(leftController.transform.forward * thrustPower);

            if(rb.velocity.x > 1.5f)
            {
                rb.velocity = new Vector3(1.5f, rb.velocity.y, rb.velocity.z);
            }

            if (rb.velocity.x < -1.5f)
            {
                rb.velocity = new Vector3(-1.5f, rb.velocity.y, rb.velocity.z);
            }

            if (rb.velocity.y > 1.5f)
            {
                rb.velocity = new Vector3(rb.velocity.x, 1.5f, rb.velocity.z);
            }

            if (rb.velocity.y < -1.5f)
            {
                rb.velocity = new Vector3(rb.velocity.x, -1.5f, rb.velocity.z);
            }

            if (rb.velocity.z > 1.5f)
            {
                rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, 1.5f);
            }

            if (rb.velocity.z < -1.5f)
            {
                rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, -1.5f);
            }

        }

        // Air-braking
        if (airBrakeReference.action.ReadValue<float>() == 1 && (Mathf.Abs(rb.velocity.x) > 0 || Mathf.Abs(rb.velocity.y) > 0 || Mathf.Abs(rb.velocity.z) > 0))
        {
            rb.AddForce(rb.velocity * (-1) * brakePower);
        }

        if(GameManager.manager.leverPulled)
        {
            rb.useGravity = false;
        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Teleport") && GameManager.manager.counter > 24)
        {
            rb.velocity = Vector3.zero;
            glassWall.layer = LayerMask.NameToLayer("Glass");
            GameManager.manager.atTelePad = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Finish"))
        {
            //textWindow.text = gameObject.name;
            GameManager.manager.currentLevelIndex++;
            levelChanger.GetComponent<LevelChanger>().GoToScene(GameManager.manager.currentLevelIndex);
        }

        if (other.gameObject.layer == LayerMask.NameToLayer("Checkpoint"))
        {
            GameManager.manager.atTheDoor = true;
            Physics.gravity = new Vector3(0, 0, 9.81f);
            rb.useGravity = true;
        }

    }

}
