/************************************************************
■Windowsの96dpiとMacの72dpiの意味
	https://cubismer.blogspot.com/2011/02/windows96dpimac72dpi.html
		
		■Web用画像の解像度は72? 96?
			http://otzt.nobody.jp/html/resolution_web.htm
		
■「解像度」ってフォントサイズにも影響するよねというお話
	https://at.sachi-web.com/blog-entry-776.html

■ofTrueTypeFont resolution
	https://forum.openframeworks.cc/t/oftruetypefont-resolution/3299
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include "ofMain.h"

/************************************************************
************************************************************/
class ofApp : public ofBaseApp{
private:
	ofImage img;
	ofTrueTypeFont font;
	bool b_DispInFont = true;
	
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
};
