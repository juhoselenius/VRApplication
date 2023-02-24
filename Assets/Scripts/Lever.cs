using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lever : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        if (transform.rotation.z > -0.5f)
        {
            GameManager.manager.leverPulled = true;
        }
    }
}
