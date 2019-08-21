//
//  functionOverloading.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//函数重载

#include "functionOverloading.hpp"
#include <iostream>
using namespace std;

int square(int x);
double square(double x);


void functionOverloading(){
    cout << square(7) <<endl;
    cout << square(0.5) <<endl;
}

int square(int x){
    cout << "integer : ";
    return x*x;
}

double square(double x){
    cout << "double : ";
    return x*x;
}

