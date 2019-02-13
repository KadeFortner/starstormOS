//
//  ram.hpp
//  starstormOS
//
//  Created by Kade Fortner on 2/4/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#ifndef ram_hpp
#define ram_hpp

#include <stdio.h>
#include "OS.hpp"

using namespace std;

class ram{
    
    private:
    string ramMemory[30];
    
    
    public:
    ram();
    string lookAt(int location);
    void assignRam(string item, int location);
    void set(int location, int value); // set location to the value where value is an integer
    void mov(int location,int location2); // set location to the value in location2
    void add(int lovation, int value); //set location to the value added to the value in A
    void sub(int location, int value); //set location to the value subtracted from the value in A that is, value - A
    void jmp(); //set the PC to the location in the A
    void jgt(int s); //set the PC to the location in the A if the value at s is greater than 0
    void jeq(int s); //set the PC to the location in the A if the value at s is equal to 0
    void jge(int s); //set the PC to the location in the A if the value at s is greater than or equal to 0
    void jlt(int s); //set the PC to the location in the A if the value at s is less than or equal to 0
    void jne(int s); //set the PC to the location in the A if the value at s is not equal to 0
    void jle(int s); //set the PC to the location in the A if the value at s is less than or equal to 0
    int out(int location); //output the current value in location to the screen
};




#endif /* ram_hpp */
