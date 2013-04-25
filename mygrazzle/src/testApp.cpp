#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    
    ofSetVerticalSync(true);
    
    
    scenes[0] = new squareScene();
    scenes[1] = new randomScene();
    scenes[2] = new colorScene();
    
    whichScene = 0;
    
    for (int i = 0; i < 3; i++){
        scenes[i]->setup();
    }
    
    

}

//--------------------------------------------------------------
void testApp::update(){

    scenes[whichScene]->update();
}

//--------------------------------------------------------------
void testApp::draw(){

    scenes[whichScene]->draw();
    
  }

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    whichScene++;
    whichScene %= 3;
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){


    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}