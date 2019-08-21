//
//  FuncClass.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/21.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "FuncClass.hpp"
#include <iostream>
using namespace std;


//定义一个具有成员函数的类
class GradeBook {
    //
    
public:
    void displayMessage(){
        cout<<"grade book"<<endl;
    }
    
    //定义一个有参成员函数
    void displayMessageWithParms(string courseName){
        cout<<"grade book"<< courseName <<endl;
    }
};

void funcTestGradeBook(){
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    
    string courseName;
    cout<< "enter course name:"<<endl;
    getline(cin, courseName);
    cout<<endl;
    myGradeBook.displayMessageWithParms("Chinese");
    myGradeBook.displayMessageWithParms(courseName);
}


class GradeBookHaveLocalVariable{
    
public:
    void setCourseName(string name){
        courseName = name;
    }
    
    string getCourseName(){
        return courseName;
    }
    
    
    
    void displayMessage(){
        cout<<"course  name: "<< getCourseName() <<endl;
    }
    
    //定义一个有参成员函数
    void displayMessageWithParms(string courseName){
        cout<<"grade book"<< courseName <<endl;
    }
    
private:
    string courseName;
};


void funcTestGradeBookHaveLocalVariable(){
    GradeBookHaveLocalVariable myGradeBookHaveLocalVariable;
    myGradeBookHaveLocalVariable.setCourseName("语文");
    
    myGradeBookHaveLocalVariable.displayMessage();
}
