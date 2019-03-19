//
//  CPU.hpp
//  starstormOS
//
//  Created by Kade Fortner on 2/13/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#ifndef CPU_hpp
#define CPU_hpp

#include <stdio.h>
#include <sstream>
#include "OS.hpp"
#include "ram.hpp"

using namespace std;

class CPU{
    
private:
    string ax, bx, cx, dx;
    int PC = 0;
    int A = 0;
    
public:
    
    CPU();
    
    void setAX(string value){ax = value;}
    void setBX(string value){bx = value;}
    void setCX(string value){cx = value;}
    void setDX(string value){dx = value;}
    string getAX(){return ax;}
    string getBX(){return bx;}
    string getCX(){return cx;}
    string getDX(){return dx;}
    int getPC(){return PC;}
    void setPC(int value){PC = value;}
    int getA(){return A;}
    void setA(int value){A = value;}
    
    
    
};

#endif /* CPU_hpp */
