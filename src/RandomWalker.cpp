//
//  RandomWalker.cpp
//  randomWalk
//
//  Created by Ryo Okada on 2019/12/03.
//

#include "RandomWalker.hpp"

RandomWalker::RandomWalker(){
    
    //初期位置
    position.x = ofGetWidth()/2.0;
    position.y = ofGetHeight()/2.0;
//    position.x = ofRandom(ofGetWidth());
//    position.y = ofRandom(ofGetHeight());
    
    left = ofRandom(0.9, 1.0);
    right = ofRandom(0.9, 1.0);
    top = ofRandom(0.9, 1.0);
    bottom = ofRandom(0.9, 1.0);
}

void RandomWalker::draw(){
    //10回
    for (int i = 0; i<10; i++){
        
        position.x += ofRandom(-left, right);
        position.y += ofRandom(-top, bottom);
        
        if (position.x < 0) {
            position.x = ofGetWidth();
        }
        if (position.x > ofGetWidth()) {
            position.x = 0;
        }
        if (position.y < 0) {
            position.y = ofGetHeight();
        }
        if (position.y > ofGetHeight()) {
            position.y = 0;
        }
        
        ofDrawCircle(position.x, position.y, 1);
    }
}
