//
//  main.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/10.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include <iostream>
#include "AddFunction.hpp"
#include "inlineFunction.hpp"
#include "referenceParameter.hpp"
#include "defaultArgument.hpp"
#include "unaryOperation.hpp"
#include "functionOverloading.hpp"
#include "FunctionTemplate.hpp"
#include "VertifyWithSetFunc.hpp"

//classAndObject
#include "FuncClass.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
//    addFunction();
    
//    testInlineFunction();
    
//    testSquareByReference();
    
//    testDefaultArgument();
    
//    testUnaryOperation();
    
    
//    functionOverloading();
    
//    testFunctionTemplate();
    
//    funcTestGradeBook();
    
//    funcTestGradeBookHaveLocalVariable();
    
//    funcTestGradeBookConstructor();
    
    //VertifyWithSetFunc
    VertifyWithSetFunc vertify1("test1");
    VertifyWithSetFunc vertify2("test2test2test2test2test2test2test2test2test2test2");
    
    cout<<"vertify1: "<< vertify1.getCourseName() <<endl;
    cout<<"vertify2: "<< vertify2.getCourseName() <<endl;
    return 0;
}
