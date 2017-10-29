#include "ofApp.h"
#include <vector>
#include <stdio.h>
#include <time.h>

//--------------------------------------------------------------
void ofApp::setup(){
  img.load("images/img.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


  // Resolution = # tiles wide & high
  int res = 3;
  int iw = img.getWidth();
  int ih = img.getHeight();
  // Slice dimensions
  int sw = iw/res;
  int sh = ih/res;

  // Coordindates of each tile
  int widths[res];
  int heights[res];
  for (int i=0; i<res; i++){
    widths[i] = iw*i/res;
    heights[i] = ih*i/res;
  }
  // Shuffle the coordinates
  int* wshuf = widths;
  int* hshuf = heights;
  random_shuffle(&wshuf[0], &wshuf[res]);
  random_shuffle(&hshuf[0], &hshuf[res]);
  
  // Draw the tiles
  for (int w=0; w<res; w++){
    for (int h=0; h<res; h++){
      int x = h;
      int y = w;
      img.drawSubsection(widths[w], heights[h], sw,sh, widths[x], heights[y] );
      // NB. drawSubsection params...
      /// \param x X position to draw cropped image at.
      /// \param y Y position to draw cropped image at.
      /// \param w Width of subsection to draw.
      /// \param h Height of subsection to draw.
      /// \param sx X position in image to begin cropping from.
      /// \param sy Y position in image to begin cropping from.
   }
  }

  // Chill!
  sleep(1);
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
