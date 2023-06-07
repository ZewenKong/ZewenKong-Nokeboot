using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Numerics;
using UnityEngine;
using UnityEngine.UI;

public class Control : MonoBehaviour
{
    private Rigidbody ball;

    public float moveSpeed = 10;

    public UnityEngine.UI.Text scoreText; 

    private int score = 0;

    // Start is called before the first frame update
    // Start() 当游戏开始运行时所执行的方法
    void Start()
    {
        // Unity 日志打印
        // UnityEngine.Debug.Log("start");

        ball = GetComponent<Rigidbody>();

    }

    // Update is called once per frame
    void Update()
    {
        // UnityEngine.Debug.Log("running");

        var x = Input.GetAxis("Horizontal");  // Unity binds "Horizontal" as "a" & "d"

        var y = Input.GetAxis("Vertical");

        // UnityEngine.Debug.Log(y.ToString());

        // Vector3 三维向量
        // force 为分量平方开根 -> 因此会导致斜方向会有更大的力 -> 调用 normalized 属性, 对向量进行裁剪
        ball.AddForce((new UnityEngine.Vector3(x, 0, y) * moveSpeed).normalized);

    }

    private void OnTriggerEnter(Collider other)
    {


        if(other.gameObject.CompareTag("Coin"))
        {
            // touch coin
            other.gameObject.SetActive(false);
            score++;
            scoreText.text = score.ToString(); 
        }
    }
}
