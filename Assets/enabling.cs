using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enabling : MonoBehaviour
{
    public GameObject target;
    public GameObject toggle;
    //public Interactable script;

    // Start is called before the first frame update
    // Update is called once per frame
    void Start()
    {
        //script = target.GetComponent<Interactable>();
    }


    void Update()
    {
        //if (script.IsToggled == true) target.SetActive(true);
        //if (script.IsToggled == false) target.SetActive(false);
        if (Input.GetKeyDown(KeyCode.C)) target.SetActive(true);
        if (Input.GetKeyUp(KeyCode.C)) target.SetActive(false);
    }
}
