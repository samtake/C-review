//
//  CreateAndDestructor.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/9/10.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "CreateAndDestructor.hpp"
#include <iostream>

CreateAndDestructor::CreateAndDestructor(int ID, string msg){
    objectID = ID;
    message = msg;
    
    cout << "Object " << objectID << " 构造函数 runs  " <<message << endl;
}


void create(void){
    cout << "createFunc " << endl;
    CreateAndDestructor fifth(5, "(local automatic in create)");
    static CreateAndDestructor sixth(6, "(local automatic in create)");
    CreateAndDestructor seventh(7, "(local automatic in create)");
}

CreateAndDestructor::~CreateAndDestructor(){
    cout<<(objectID ==1 || objectID == 6 ? "\n" : "");
    
    cout << "Object " << objectID << " 析构函数 runs   " <<message << endl;
}


void testCreateAndDestructor(){
    cout << "testFunc " << endl;
    CreateAndDestructor second(2, "(local automatic in testFunc)");
    static CreateAndDestructor third(3, "(local automatic in testFunc)");
    
    create();
    
    
    cout << "testFunc : " << endl;
    
    CreateAndDestructor forth(4, "(local automatic in testFunc)");
    
    cout << "\ntestFunc end \n" << endl;
}
