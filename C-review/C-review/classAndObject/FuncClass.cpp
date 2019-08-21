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



class GradeBook {
    //
    
public:
    void displayMessage(){
        cout<<"grade book"<<endl;
    }
};

void funcTestGradeBook(){
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
}
