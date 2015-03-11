#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"
#include "Fisheye.h"

class ofApp : public ofBaseApp {
public:
	void setup();
    void update();
	void draw();
    void keyPressed(int key);
	
    ofxPanel gui;
    ofParameter<ofVec2f> offset;
    ofParameter<float> radius, fov, sphereRadius;
    ofParameter<int> thetaResolution, radiusResolution;
    
    ofEasyCam cam;
    Fisheye fisheye;
    
    ofDirectory dir;
    int index;
	ofImage img;
};
