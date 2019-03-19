//
//  Machine.hpp
//  starstormOS
//
//  Created by Kade Fortner on 2/22/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#ifndef Machine_hpp
#define Machine_hpp

#include <stdio.h>
#include <sstream>
#include "OS.hpp"
#include "ram.hpp"
#include "CPU.hpp"

using namespace std;

class Machine{
    
private:
    
    RAM ram;
    CPU cpu;
    OS os;
    
public:
    
    Machine();
    
    string getAX(){return cpu.getAX();}
    string getBX(){return cpu.getBX();}
    string getCX(){return cpu.getCX();}
    string getDX(){return cpu.getDX();}
    int getPC(){return cpu.getPC();}
    int getA(){return cpu.getA();}
    
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



#endif /* Machine_hpp */
