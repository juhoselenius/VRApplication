using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class ObjectNudge : MonoBehaviour
{
    public float randomForceLimit = 0.2f;
    public float randomTorqueLimit = 0.05f;
    
    // Start is called before the first frame update
    void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        rb.AddForce(new Vector3(Random.Range(-randomForceLimit, randomForceLimit), Random.Range(-randomForceLimit, randomForceLimit), Random.Range(-randomForceLimit, randomForceLimit)), ForceMode.Impulse);
        rb.AddTorque(new Vector3(Random.Range(0f, randomTorqueLimit), Random.Range(0f, randomTorqueLimit), Random.Range(0f, randomTorqueLimit)), ForceMode.Impulse);
    }

    public void IsGrabbed()
    {
        GameManager.manager.cubeGrabbed = true;
    }

    public void IsReleased()
    {
        GameManager.manager.cubeReleased = true;
    }
}
