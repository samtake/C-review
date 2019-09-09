//
//  CreateAndDestructor.hpp
//  C-review
//
//  Created by 黄龙山 on 2019/9/10.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#ifndef CreateAndDestructor_hpp
#define CreateAndDestructor_hpp

#include <stdio.h>
#include <string>
using namespace std;

void testCreateAndDestructor();

class CreateAndDestructor {
private:
    int objectID;
    string message;
    
public:
    CreateAndDestructor(int, string);
    ~CreateAndDestructor();
};

#endif /* CreateAndDestructor_hpp */
