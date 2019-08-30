//
//  DefaultArgumentConstructorTime.cpp
//  C-review
//
//  Created by 黄龙山 on 2019/8/30.
//  Copyright © 2019 黄龙山. All rights reserved.
//

#include "DefaultArgumentConstructorTime.hpp"
#include <iomanip>

DefaultArgumentConstructorTime :: DefaultArgumentConstructorTime(int h, int m, int s){
    setTime(h,m,s);
}

void DefaultArgumentConstructorTime::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}


void DefaultArgumentConstructorTime::setHour(int h){
    hour = (h >=0 && h<24) ? h : 0;
}
void DefaultArgumentConstructorTime::setMinute(int m){
    minute = (m >=0 && m< 60) ? m : 0;
}
void DefaultArgumentConstructorTime::setSecond(int s){
    second = (s >=0 && s< 60) ? s : 0;
}


int DefaultArgumentConstructorTime::getHour(){
    return hour;
}

int DefaultArgumentConstructorTime::getMinute(){
    return minute;
}

int DefaultArgumentConstructorTime::getSecond(){
    return second;
}



void DefaultArgumentConstructorTime::printUniversal(){
    cout << setfill('0') << setw(2)<<getHour()<<":"
    <<setw(2)<<getMinute()<<":"
    <<setw(2)<<getSecond()
    << endl;
}


void DefaultArgumentConstructorTime::printStandard(){
    cout << ( (getHour()==0||getHour()==12) ? 12 : getHour()%12 ) << ":"
    << setfill('0') << setw(2)<<getMinute()<< ":"
    <<getSecond()
    << (getHour() < 12 ? "AM" : "PM")
    << endl;
}


void testDefaultArgumentConstructorTime(){
    DefaultArgumentConstructorTime t1;
    cout<<"t1" << endl;
    t1.printUniversal();
    t1.printStandard();
    
    
    DefaultArgumentConstructorTime t2(1);
    cout<<"t2" << endl;
    t2.printUniversal();
    t2.printStandard();
    
    DefaultArgumentConstructorTime t3(1,99);
    cout<<"t3" << endl;
    t3.printUniversal();
    t3.printStandard();
    
    
    DefaultArgumentConstructorTime t4(1,99,66);
    cout<<"t4" << endl;
    t4.printUniversal();
    t4.printStandard();
    
}

