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

class CPU
{
    
private:
    int ax, bx, cx, dx;
    int PC = 0;
    int A = 0;
    
public:
    
    CPU();
    
    void setAX(int value){ax = value;}
    void setBX(int value){bx = value;}
    void setCX(int value){cx = value;}
    void setDX(int value){dx = value;}
    int getAX(){return ax;}
    int getBX(){return bx;}
    int getCX(){return cx;}
    int getDX(){return dx;}
    int getPC(){return PC;}
    void setPC(int value){PC = value;}
    int getA(){return A;}
    void setA(int value){A = value;}
    
    void set(string location, int value); // set location to the value where value is an integer
    void mov(string location,string location2); // set location to the value in location2
    void add(string location, string location2); //set location to the value added to the value in A
    void sub(string location, string location2); //set location to the value subtracted from the value in A that is, value - A
    
    void jmp(); //set the PC to the location in the A
    void jgt(string location); //set the PC to the value in the A if the value at s is greater than 0
    void jeq(string location); //set the PC to the value in the A if the value at s is equal to 0
    void jge(string location); //set the PC to the location in the A if the value at s is greater than or equal to 0
    void jlt(string location); //set the PC to the location in the A if the value at s is less than or equal to 0
    void jne(string location); //set the PC to the location in the A if the value at s is not equal to 0
    void jle(string location); //set the PC to the location in the A if the value at s is less than or equal to 0
    void out(string location); //output the current value in location to the screen
    
    
};

#endif /* CPU_hpp */
