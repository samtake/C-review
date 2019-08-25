//
//  VertifyWithSetFunc.hpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/25.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#ifndef VertifyWithSetFunc_hpp
#define VertifyWithSetFunc_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class VertifyWithSetFunc {
    //instance variables
    
public:
    
    VertifyWithSetFunc(string);
    
    void setCourseName(string);
    string getCourseName();
    
    void displayMessage();
    
private:
    string courseName;
};

#endif /* VertifyWithSetFunc_hpp */
