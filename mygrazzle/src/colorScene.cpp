//
//  squareScene.cpp
//  sceneExample
//
//  Created by zach lieberman on 4/24/13.
//
//

#include "colorScene.h"


void colorScene::setup(){
    
  
}

void colorScene::update(){

    if (ofGetFrameNum() % 10 == true){
        color.set(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));;
    }
    
    
}

void colorScene::draw(){
    
   
    ofFill();
    ofSetColor(color);
    ofRect(0,0,ofGetWidth(), ofGetHeight());
}