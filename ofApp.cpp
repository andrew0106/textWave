#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    numsOfXTiles=35;   // how many the cols
    numsOfYTiles=35;
    spacingX=ofGetWidth()/numsOfXTiles;
      // get the val that each gap
    spacingY=ofGetHeight()/numsOfYTiles;
    startingX=spacingX/2;   //the first circle point
    startingY=spacingY/2+5;
    
    ofSetBackgroundAuto(false);

    gap=-50;

}

//--------------------------------------------------------------
void ofApp::update(){
    phase+=2;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,0,0,50);
    ofDrawRectangle(0, 0, 600, 600);
    for(int i = 0; i < numsOfXTiles; i++){
        for(int j = 0; j < numsOfYTiles; j++){
            
            int locX = startingX+spacingX*i;
            int locY = startingY+spacingY*j;
            
            ofPushMatrix();

            float dist = ofDist(ofGetWidth()/2,ofGetHeight()/2,locX,locY);
//            int typeA = ofMap(dist,0,600,0,3);
            ofTranslate(locX,locY);
            
             s = sin(ofDegToRad(phase+dist));
            int typeA=ofMap(s,-1,1,0,5);
            
            ofSetColor(0,255,0);
            ofDrawBitmapString(nums[typeA], 0, 0);
            
            ofPopMatrix();
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
