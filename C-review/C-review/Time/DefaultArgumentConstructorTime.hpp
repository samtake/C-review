//
//  DefaultArgumentConstructorTime.hpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/30.
//  Copyright © 2019 黄龙山. All rights reserved.
//具有默认实参的构造函数

#ifndef DefaultArgumentConstructorTime_hpp
#define DefaultArgumentConstructorTime_hpp

#include <stdio.h>

#include <stdio.h>
#include <iostream>
using namespace std;

void testDefaultArgumentConstructorTime();

class DefaultArgumentConstructorTime {
    
private:
    int hour;
    int minute;
    int second;
    
public:
    DefaultArgumentConstructorTime(int = 0, int = 0, int = 0);
    
    void setTime(int, int, int);
    
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    
    int getHour();
    int getMinute();
    int getSecond();
    
    void printUniversal();
    void printStandard();
};

#endif /* DefaultArgumentConstructorTime_hpp */
