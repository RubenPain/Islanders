using UnityEngine;
using System.Collections;
using System.IO.Ports;
using System.IO;
using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine.UI;

public class Arduino : MonoBehaviour {

    private SerialPort sp;
    private string inString;
    public List<GameObject> listprefabs;
    private int index;
    private List<string> NumTag = new List<string>(3);
    public List<GameObject> listimages;


    void Start ()
    {
      
        sp = new SerialPort("COM7",115200);
        //sp.WriteTimeout = 100; 
        //sp.ReadTimeout = 100;
        sp.Open(); 
        sp.BaseStream.Flush();
        sp.DtrEnable = true;
        
        Debug.Log("Starting Done");
        NumTag.Add("7930080");
        NumTag.Add("6860806");
        NumTag.Add("9732625");

    }

    
    void Update ()
    {
        serialRead();
           
    }

    private void  serialRead( )
    {
        
        inString = (string)sp.ReadLine();
        Debug.Log(inString);
        for (int i = 0; i < NumTag.Count; i++)
        {
            if (inString == NumTag[i])
            {
                index = i;
            }
        }
        if (inString != "0")
        {
            Instantiate(listprefabs[index], new Vector3(0, 0, 0), Quaternion.identity, transform);
            listimages[index].GetComponent<Graphic>().color = Color.red;
        }
        else
        {
            foreach (Transform child in transform) 
            {
                GameObject.Destroy(child.gameObject);
                listimages[index].GetComponent<Graphic>().color = Color.black;
            }
        }
        sp.BaseStream.Flush();
        sp.DtrEnable = true;
        
        
    } 

    public void OnDestroy() // a la fermeture de l'application
    {
		
        if ( sp.IsOpen ) sp.Close(); 
    }


    


}




