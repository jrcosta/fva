using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameController : MonoBehaviour {

    public float speedCam;
    private Camera cam;
    public Transform playerTransform;
    public Transform limitCamLeft,limitCamRight,limitCamUp,limitCamDown;

    [Header ("Audio")]
    public AudioSource sfxSource;
    public AudioSource musicSource;
    public AudioClip sfxJump;
    public AudioClip sfxAtack;
    public AudioClip[] sfxStep;
    public AudioClip sfxCoin;

    void Start() {
        
       cam = Camera.main; 

    }


    void Update() {
        
    }

    void LateUpdate() {

        /*Vector2 posCam = new Vector3(playerTransform.position.x, playerTransform.position.y, -10); 
        cam.transform.position = posCam;*/
        float posCamX = playerTransform.position.x;
        float posCamY = playerTransform.position.y;

        if(cam.transform.position.x < limitCamLeft.position.x && playerTransform.position.x < limitCamLeft.position.x){

            posCamX = limitCamLeft.position.x;

        }
        else if(cam.transform.position.x > limitCamRight.position.x && playerTransform.position.x > limitCamRight.position.x){

            posCamX = limitCamRight.position.x;
        }

    
        if(cam.transform.position.y < limitCamDown.position.y && playerTransform.position.y < limitCamDown.position.y){

            posCamY = limitCamDown.position.y;

        }
        else if(cam.transform.position.y > limitCamUp.position.y && playerTransform.position.y > limitCamUp.position.y){

            posCamY = limitCamUp.position.y;

        }

        Vector3 posCam = new Vector3(posCamX, posCamY, cam.transform.position.z);

        cam.transform.position = Vector3.Lerp(cam.transform.position, posCam, speedCam * Time.deltaTime);

    }

    public void playSFX(AudioClip sfxClipe, float volume){

        sfxSource.PlayOneShot(sfxClipe, volume);
    }


}
