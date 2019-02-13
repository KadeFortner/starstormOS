//
//  ram.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/4/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "ram.hpp"

ram::ram(){
    cout << "The RAM has 30 spots available" << endl;
    ramMemory[0] = "ax";
    ramMemory[1] = "bx";
    ramMemory[2] = "cx";
    ramMemory[3] = "dx";
    ramMemory[4] = "PC";
    ramMemory[5] = "A";
}

string ram::lookAt(int location){
    return ramMemory[location];
}

void ram::assignRam(string item, int location){
    ramMemory[location] = item;
    cout << "The item has been inserted into the RAM successfully" << endl;
}

