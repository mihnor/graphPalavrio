#include "ofApp.h"


int numLetters = 26;
float angle = 360/numLetters;
//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackgroundGradient(155, 100);

    ofSetCircleResolution(100);
    
    
//    angle = (360)/numLetters;
    


}

//--------------------------------------------------------------
void ofApp::update(){
//float angle = (360)/numLetters;
}

//--------------------------------------------------------------
void ofApp::draw(){
    int w = ofGetWidth()/2;
    int h = ofGetHeight()/2;
    int radius = 600;
    
    ofSetColor(0);
    ofNoFill();
    ofCircle(w, h, 0.1*radius);
    ofCircle(w, h, 0.2*radius);
    ofCircle(w, h, 0.3*radius);
    ofCircle(w, h, 0.4*radius);
    
    ofPoint centro = ofPoint(0,0);
//    ofPoint fimSeg = ofPoint(w,h - 0.4*radius);
    ofVec2f vec, vec2;
    vec.set(0, 0.4*radius);
    vec2.set(0, 0.45*radius);
    ofSetLineWidth(2);
    
    for (int i =0; i <= numLetters; i++){
        
        ofPushMatrix();
        ofTranslate(w, h);
        ofRotate(angle*i);
        ofLine(centro,vec);
        ofDrawBitmapString(ofToString(i), vec2);
        ofPopMatrix();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
