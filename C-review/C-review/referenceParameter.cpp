//
//  referenceParameter.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//引用形参

#include "referenceParameter.hpp"
#include <iostream>
using namespace std;

int squareByValue(int number){
    return number *=number;
}

void squareByReference(int &numberRef){
    numberRef *=numberRef;
}


void testSquareByReference(){
    int x =2;
    int y = 4;
    
    cout << "x=" << x << " before squareByValue"  << endl;
    cout << "squareByValue =" << squareByValue(x)  << endl;
    cout << "x=" << x << " after squareByValue"  << endl;
    
    cout << "y=" << y << " before squareByReference"  << endl;
    squareByReference(y);
    cout << "y=" << y << " after squareByReference"  << endl;
}
