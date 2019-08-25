//
//  VertifyWithSetFunc.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/25.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "VertifyWithSetFunc.hpp"


VertifyWithSetFunc::VertifyWithSetFunc(string name){
    setCourseName(name);
}

void VertifyWithSetFunc::setCourseName(string name){
    if (name.length() <= 10) {
        courseName = name ;
    }
    
    if (name.length() > 10) {
        courseName = name.substr(0, 10);
        cout<< "name is long than 10 :"<< name << endl;
    }
}


string VertifyWithSetFunc::getCourseName(){
    return courseName;
}

void VertifyWithSetFunc::displayMessage(){
    cout<<"Vertify With Set Func: "<< getCourseName() <<endl;
}


