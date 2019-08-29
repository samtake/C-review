//
//  BaseCount.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/29.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "BaseCount.hpp"


class Count {
private:
    int x;
    
public:
    void setX(int value){
        x = value;
    }
    
    void print(){
        cout << x << endl;
    }
};

void testBaseCount(){
    Count counter;
    counter.setX(1);
    cout << "counter.setX(1);" ;
    counter.print();
    
    Count *counterPtr = &counter;
    counterPtr->setX(2);
    cout << "counterPtr->setX(2);";
    counterPtr->print();
    
    
    
    Count &counterRef = counter;
    counterRef.setX(3);
    cout << "counterRef.setX(3);";
    counterRef.print();
}
