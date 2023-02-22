using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ObjectPlacement : MonoBehaviour
{
    public GameObject placementLight;
    public bool objectPlaced;
    
    GameObject placedObject = null;
    Rigidbody rb;
    
    // Start is called before the first frame update
    void Start()
    {
        placementLight.SetActive(false);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(objectPlaced)
        {
            rb.velocity = Vector3.zero;
            rb.AddTorque(0, 0.25f, 0);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(gameObject.name == "CubePlaceholder" && other.gameObject.tag == "cube")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.cubeAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }

        if (gameObject.name == "CylinderPlaceholder" && other.gameObject.tag == "cylinder")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.cylinderAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }

        if (gameObject.name == "SpherecubePlaceholder" && other.gameObject.tag == "spherecube")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.spherecubeAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }

        if (gameObject.name == "PlatePlaceholder" && other.gameObject.tag == "plate")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.plateAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }

        if (gameObject.name == "SpherePlaceholder" && other.gameObject.tag == "sphere")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.sphereAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }

        if (gameObject.name == "CapsulePlaceholder" && other.gameObject.tag == "capsule")
        {
            placedObject = other.gameObject;
            placedObject.transform.position = gameObject.transform.position;
            placedObject.transform.rotation = Quaternion.identity;
            rb = placedObject.GetComponent<Rigidbody>();

            placementLight.SetActive(true);

            objectPlaced = true;
            GameManager.manager.capsuleAtPlace = true;

            placedObject.GetComponent<XRGrabInteractable>().enabled = false;
        }
    }
}
