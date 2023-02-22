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

    public TextMeshProUGUI textWindow;

    public float thrustPower = 1f;
    public float brakePower = 1.25f;

    private Rigidbody rb;

    public GameObject levelChanger;


    private void Awake()
    {
        rb = gameObject.GetComponent<Rigidbody>();
    }

    private void Update()
    {
        //textWindow.text = "Velocity x: " + rb.velocity.x + "\nVelocity y:" + rb.velocity.y + "\nVelocity z:" + rb.velocity.z;
        //textWindow.text = "AirBrakeRef value: " + airBrakeReference.action.ReadValue<float>();
        // textWindow.text = "Playing sound: " + AudioManager.aManager.GetPlayingMusic().name;
        textWindow.text = "Cube: " + GameManager.manager.cubeAtPlace + "\n" +
            "Sphere: " + GameManager.manager.sphereAtPlace + "\n" +
            "Spherecube: " + GameManager.manager.spherecubeAtPlace + "\n" +
            "Capsule: " + GameManager.manager.capsuleAtPlace + "\n" +
            "Cylinder: " + GameManager.manager.cylinderAtPlace + "\n" +
            "Plate: " + GameManager.manager.plateAtPlace;
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

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("Finish"))
        {
            levelChanger.GetComponent<LevelChanger>().GoToScene(GameManager.manager.currentLevelIndex + 1);
        }
    }

}
