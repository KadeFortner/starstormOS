//
//  ram.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/4/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "ram.hpp"

RAM::RAM(){
    cout << "The RAM has 30 spots available" << endl;
}

string RAM::lookAt(int location){
    return RAMmemory[location];
}

void RAM::assignRAM(string item, int location){
    RAMmemory[location] = item;
    cout << "The item has been inserted into the RAM successfully" << endl;
}
