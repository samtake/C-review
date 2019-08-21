//
//  FunctionTemplate.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "FunctionTemplate.hpp"
#include <iostream>
using namespace std;


template <class T>
T maximum(T value1, T value2, T value3 ) {
    T maximumValue = value1;
    
    if (value2 > maximumValue) {
        maximumValue = value2 ;
    }
    
    if (value3 > maximumValue) {
        maximumValue = value3 ;
    }
    
    return maximumValue;
}


void testFunctionTemplate(){
    int int1, int2, int3;
    cout << "input 3 integer values : ";
    cin >> int1 >>int2 >>int3;
    
    cout << "the maximum integer values is : " << maximum(int1, int2, int3) << endl;
}
