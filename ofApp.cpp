/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

/******************************
******************************/
void ofApp::setup(){
	/********************
	********************/
	ofSetBackgroundAuto(true);
	
	ofSetWindowTitle("align font");
	ofSetVerticalSync(true);
	ofSetFrameRate(30);
	ofSetWindowShape(600, 600);
	ofSetEscapeQuitsApp(false);
	
	ofEnableAlphaBlending();
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);
	// ofEnableBlendMode(OF_BLENDMODE_ADD);
	// ofEnableSmoothing();
	
	/********************
	********************/
	img.load("img/temp.png");
	
	/********************
	bool ofTrueTypeFont::load(const filesystem::path &filename, int fontsize, bool _bAntiAliased=true, bool _bFullCharacterSet=true, bool makeContours=false, float simplifyAmt=0.3f, int dpi=0)
		filename The name of the font file to load.
		fontsize The size in pixels to load the font.		
		_bAntiAliased true if the font should be anti-aliased.
		_bFullCharacterSet true if the full character set should be cached.
		makeControus true if the vector contours should be cached.
		simplifyAmt the amount to simplify the vector contours. Larger number means more simplified.
		dpi the dots per inch used to specify rendering size.
		
		Returns: true if the font was loaded correctly.
	********************/
	font.load("font/RictyDiminished-Regular.ttf", 40/* font size in pixels */, true/* _bAntiAliased */, true/* _bFullCharacterSet */, false/* makeContours */, 0.3f/* simplifyAmt */, 72/* dpi */);
}

/******************************
******************************/
void ofApp::update(){

}

/******************************
******************************/
void ofApp::draw(){
	ofBackground(0);
	if(b_DispInFont){
		font.drawString("Nobuhiro.Saijo", 100, 88);
		font.drawString("FONT", 100, 300);		
	}else{
		img.draw(0, 0);
		font.drawString("IMAGE", 100, 300);		
	}
}

/******************************
******************************/
void ofApp::keyPressed(int key){
	switch(key){
		case ' ':
			b_DispInFont = !b_DispInFont;
			break;
	}
}

/******************************
******************************/
void ofApp::keyReleased(int key){

}

/******************************
******************************/
void ofApp::mouseMoved(int x, int y ){

}

/******************************
******************************/
void ofApp::mouseDragged(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mousePressed(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseReleased(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseEntered(int x, int y){

}

/******************************
******************************/
void ofApp::mouseExited(int x, int y){

}

/******************************
******************************/
void ofApp::windowResized(int w, int h){

}

/******************************
******************************/
void ofApp::gotMessage(ofMessage msg){

}

/******************************
******************************/
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
