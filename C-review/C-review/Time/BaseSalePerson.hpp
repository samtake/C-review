//
//  BaseSalePerson.hpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/30.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#ifndef BaseSalePerson_hpp
#define BaseSalePerson_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;



class BaseSalePerson {
    
public:
    static const int monthsPerYear = 12;
    BaseSalePerson();
    void getSalesFromUser();
    void setSales( int, double);
    void printAnnualSales();
    
private:
    double totalAnnualSales();
    double sales[monthsPerYear];
};


void testBaseSalePerson();

#endif /* BaseSalePerson_hpp */
