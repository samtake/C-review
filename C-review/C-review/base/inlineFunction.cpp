//
//  inlineFunction.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "inlineFunction.hpp"
#include <iostream>

//using std::cout;
using namespace std;
using std::cin;
using std::endl;


inline double cube(const double side){
    return side*side*side;
}

void testInlineFunction(){
    double sideValue;
    for (int i=1 ; i<=3 ; i++) {
        cout << "enter the side length of your cube:";
        cin >>sideValue;
        
        cout << "side=" << sideValue << "cube=" << cube(sideValue) <<endl;
    }
}


