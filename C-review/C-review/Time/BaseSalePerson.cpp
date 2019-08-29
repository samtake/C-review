//
//  BaseSalePerson.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/30.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "BaseSalePerson.hpp"

BaseSalePerson::BaseSalePerson(){
    for (int i = 0; i<monthsPerYear; i++) {
        sales[i]=0.0;
    }
}

void BaseSalePerson::getSalesFromUser(){
    double salesFigure;
    for (int i = 1; i<monthsPerYear; i++) {
        cout << "enter sales amount fo month"
        << i << ":" ;
        cin >> salesFigure ;
        setSales(i, salesFigure);
    }
}


void BaseSalePerson:: setSales(int month, double amount){
    if (month >= 1 && month << monthsPerYear) {
        sales[ month - 1 ] = amount;
    }else{
        cout << "invalid month or mount value"<<endl;
    }
}


void BaseSalePerson::printAnnualSales(){
    cout<< setprecision(2)<<fixed<<"\n the total annual sales are: $" << totalAnnualSales() <<endl;
}

double BaseSalePerson::totalAnnualSales(){
    double total = 0.0;
    for (int i=0; i<monthsPerYear; i++) {
        total +=sales[i];
    }
    return total;
}


void testBaseSalePerson(){
    BaseSalePerson s;
    s.getSalesFromUser();
    s.printAnnualSales();
}


