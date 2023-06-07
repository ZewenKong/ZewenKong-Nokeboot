using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    // Start is called before the first frame update
    //void Start()
    //{
        
    //}

    // Update is called once per frame
    void Update()
    {
        // 使金币旋转
        // deltaTime 每一帧的间隔时间

        transform.Rotate(new Vector3(15, 30, 45) * Time.deltaTime);
    }
}
