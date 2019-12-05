//
//  RandomWalker.hpp
//  randomWalk
//
//  Created by Ryo Okada on 2019/12/03.
//

#ifndef RandomWalker_hpp
#define RandomWalker_hpp

#include <stdio.h>
#include "ofMain.h"

class RandomWalker {
    
public:
    
    RandomWalker();
    void draw();
    
    ofVec2f position;
    float left, right, top, bottom;
};

#endif /* RandomWalker_hpp */
