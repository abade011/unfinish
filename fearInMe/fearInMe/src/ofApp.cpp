#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	child.setup();
	one.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	one.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	child.draw(child.x, child.y);
	one.draw(one.x, one.y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == OF_KEY_RIGHT) {
		child.x += 5;
	}
	if (key == OF_KEY_LEFT) {
		child.x -= 5;
	}
	if (key == OF_KEY_UP) {
		child.y -= 5;
	}
	if (key == OF_KEY_DOWN) {
		child.y += 5;
	}
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
