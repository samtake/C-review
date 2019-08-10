//
//  addFunction.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/10.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "AddFunction.hpp"

#include <iostream>

void addFunction(){
    int number1;
    std::cout << "enter first integer:";
    std::cin >>number1;
    
    int number2;
    int sum;
    
    std::cout << "enter second integer:";
    std::cin >> number2;
    
    sum = number1 + number2;
    std::cout<<"sum is " << sum << std::endl;
}


