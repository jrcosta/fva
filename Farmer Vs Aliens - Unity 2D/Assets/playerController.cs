﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerController : MonoBehaviour {
    
    private Rigidbody2D playerRb;
    private Animator playerAnimator;
    public float speed;
    public float jumpForce;
    public bool isLookLeft;
    public Transform groudCheck;
    public Transform mao;
    private bool isGrounded;
    private bool isAtack;
    public GameObject hitBoxPrefab;

    public gameController _gameController;

    void Start() {

        playerRb = GetComponent<Rigidbody2D>();
        playerAnimator = GetComponent<Animator>();
        _gameController = FindObjectOfType(typeof(gameController)) as gameController;
        _gameController.playerTransform = this.transform;
    }
    
    
    void Update() {

        float h = Input.GetAxisRaw("Horizontal");

        if(isAtack == true && isGrounded == true){

            h = 0;

        }

        if(h > 0 && isLookLeft == true){
            Flip();
        }
        else if (h < 0 && isLookLeft == false){
            Flip();
        }

        float speedY = playerRb.velocity.y; 

        
        if(Input.GetButtonDown("Jump") && isGrounded == true){

            _gameController.playSFX(_gameController.sfxJump, 0.5f);
            playerRb.AddForce(new Vector2(0,jumpForce));
        }
        
        if(Input.GetButtonDown("Fire1") && isAtack == false){


            _gameController.playSFX(_gameController.sfxAtack, 0.5f);
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

    void OnTriggerEnter2D(Collider2D col){
        
        if(col.gameObject.tag == "coletaveis"){

            _gameController.playSFX(_gameController.sfxCoin, 0.5f);
            Destroy(col.gameObject);

        }


    }
        
    void Flip(){
        
        isLookLeft = !isLookLeft;
        float x = transform.localScale.x * -1; //inverte o sinal do scale x
        transform.localScale = new Vector3(x, transform.localScale.y, transform.localScale.z);
        
    }

    void onEndAtack(){
        
        isAtack = false;

    }

    void hitBoxAtack() {

        GameObject hitBoxTemp = Instantiate(hitBoxPrefab, mao.position, mao.localRotation);
        Destroy(hitBoxTemp, 0.2f);

    }

    void footStep(){

     _gameController.playSFX(_gameController.sfxStep[Random.Range(0,_gameController.sfxStep.Length)], 1f);
        
    }

    }

