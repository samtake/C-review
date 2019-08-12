//
//  defaultArgument.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/12.
//  Copyright © 2019 黄龙山. All rights reserved.
//默认实参

#include "defaultArgument.hpp"
#include <iostream>
using namespace std;

int boxVolume(int length = 1, int width = 1, int height = 1);

void testDefaultArgument(){
    cout << "default = " <<boxVolume() << endl;
    
    cout << "length  = 2 : " <<boxVolume(2) << endl;
    
    cout << "length  = 2 , width =3 : " <<boxVolume(2,3) << endl;
    
    cout << "length  = 2 , width =3 , height = 4 : " <<boxVolume(2, 3, 4) << endl;
}


int boxVolume(int length, int width, int height){
    return length*width*height;
}


