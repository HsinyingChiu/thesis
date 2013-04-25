#pragma once

#include "baseScene.h"



class squareScene : public baseScene {
    
    
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    void keyPressed  (int key);
    

    
    ofImage main;
    
    baseScene * scenes[3];
    int whichScene;
    
    bool next=false;

    
    
    
};


