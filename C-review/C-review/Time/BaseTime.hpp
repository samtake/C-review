//
//  BaseTime.hpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/29.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#ifndef BaseTime_hpp
#define BaseTime_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

void testBaseTime();

class Time {
private:
    int hour;
    int minute;
    int second;
    
public:
    Time();
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();
};

#endif /* BaseTime_hpp */
