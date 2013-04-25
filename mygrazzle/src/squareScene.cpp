//
//  squareScene.cpp
//  sceneExample
//
//  Created by zach lieberman on 4/24/13.
//
//

#include "squareScene.h"
#include "randomScene.h"
#include "colorScene.h"



void squareScene::setup(){
    
        
    main.loadImage("main.png");
    
    /*scenes[0] = new squareScene();
    scenes[1] = new randomScene();
    scenes[2] = new colorScene();*/
    
    whichScene = 0;
    
    /*for (int i = 0; i < 3; i++){
        scenes[i]->setup();
    }*/

    
    
}

void squareScene::update(){

}

void squareScene::draw(){
    
    
    main.draw(0, 0, ofGetWidth(),ofGetHeight());
   
    
    if(next==true){

        scenes[1]->draw();
    
    
    }
}
void squareScene::mousePressed(int x, int y, int button){
    
  
    if(x>0&&x<300){
        next=true;
    }

    
    
}
void squareScene::keyPressed(int key){
    

}