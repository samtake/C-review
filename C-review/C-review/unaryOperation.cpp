//
//  unaryOperation.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//一元作用域运算符"::"  unary scope resolation operator

#include "unaryOperation.hpp"
#include <iostream>
using namespace std;

int number = 7;

void testUnaryOperation(){
    double number = 10.7;
    
    cout << "location number = " << number <<endl;
    
    cout << "gloable number = " << ::number <<endl;
    
}
