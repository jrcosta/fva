using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerController : MonoBehaviour {
    
    private Rigidbody2D playerRb;
    private Animator playerAnimator;

    public float speed;
    public float jumpForce;
    public bool isLookLeft;
    public Transform groudCheck;
    private bool isGrounded;
    private bool isAtack;
    
    
    void Start() {

        playerRb = GetComponent<Rigidbody2D>();
        playerAnimator = GetComponent<Animator>();
        
    }

    
    void Update() {

        float h = Input.GetAxisRaw("Horizontal");

        if(h > 0 && isLookLeft == true){
            Flip();
        }
        else if (h < 0 && isLookLeft == false){
            Flip();
        }

        float speedY = playerRb.velocity.y; 

        
        if(Input.GetButtonDown("Jump") && isGrounded == true){

            playerRb.AddForce(new Vector2(0,jumpForce));

        }
        
        if(Input.GetButtonDown("Fire1") && isGrounded == true){
            isAtack = true;
            playerAnimator.SetTrigger("atack");

        }

        playerRb.velocity = new Vector2(h * speed, speedY);

        playerAnimator.SetInteger("h",(int)h);
        playerAnimator.SetBool("isGrounded", isGrounded);
        playerAnimator.SetFloat("speedY", speedY);
        playerAnimator.SetBool("isAtack",isAtack);
        
    }

    void FixedUpdate() {
        
        isGrounded = Physics2D.OverlapCircle(groudCheck.position, 0.02f);
    
    }
    void Flip(){
        
        isLookLeft = !isLookLeft;
        float x = transform.localScale.x * -1; //inverte o sinal do scale x
        transform.localScale = new Vector3(x, transform.localScale.y, transform.localScale.z);
        
    }
}
