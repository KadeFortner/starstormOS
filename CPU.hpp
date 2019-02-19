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
    
    
    void set(string location, int value); // set location to the value where value is an integer
        //Works
    void mov(string location,string location2); // set location to the value in location2
        //Kind of works. Can't convert ax - dx values to ints
    void add(string location, string location2); //set location to the value added to the value in A
        //Can't convert ax - dx values to ints
    void sub(int location, int value); //set location to the value subtracted from the value in A that is, value - A
        //Can't convert ax - dx values to ints
    
    //The rest of these won't work as inteded since I can't make ax-dx ints
    
    void jmp(); //set the PC to the location in the A
    void jgt(int s); //set the PC to the location in the A if the value at s is greater than 0
    void jeq(int s); //set the PC to the location in the A if the value at s is equal to 0
    void jge(int s); //set the PC to the location in the A if the value at s is greater than or equal to 0
    void jlt(int s); //set the PC to the location in the A if the value at s is less than or equal to 0
    void jne(int s); //set the PC to the location in the A if the value at s is not equal to 0
    void jle(int s); //set the PC to the location in the A if the value at s is less than or equal to 0
    void out(int s); //output the current value in location to the screen
};

#endif /* CPU_hpp */
