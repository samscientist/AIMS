using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit.UI;

public class enableChildManipulating : MonoBehaviour
{
    public Component[] vehicles;

    public bool activeEnable = true;

    public bool ActiveEnable
    {
        get => activeEnable;
        set => activeEnable = value;
    }

    // Start is called before the first frame update
    void Start()
    {
        vehicles = GetComponentsInChildren<ObjectManipulator>();
    }

    void Update()
    {
        if (activeEnable == true)
        {
            foreach (ObjectManipulator VehicleManipulation in vehicles)
                VehicleManipulation.enabled = true;
        }
        else
        {
            foreach (ObjectManipulator VehicleManipulation in vehicles)
                VehicleManipulation.enabled = false;
        }
    }
}
