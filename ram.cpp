//
//  ram.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/4/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "ram.hpp"

RAM::RAM(){
    cout << "The RAM has been made and has 1000 spots available" << endl;
}

string RAM::lookAt(int location){
    return RAMmemory[location];
}

void RAM::assignRAM(string item, int location){
    RAMmemory[location] = item;
    cout << "The item has been inserted into the RAM successfully" << endl;
    int i = 0;
    while(takenSlots[i] != 0){
        i++;
    }
    takenSlots[i] = i;
    cout << "Taken Slots has been updated" << endl;
}

void RAM::numOfFreeSlots(){
    int i = 0;
    while(freeSlots[i] != 0){
        i++;
    }
    cout << "There are " << i << "number of free slots in RAM" << endl;
}

void RAM::numOfTakenSlots(){
    int i = 0;
    while(takenSlots[i] != 0){
        i++;
    }
    cout << "There are " << i << " taken slots in RAM" << endl;
}

void RAM::showTakenSlots(){
    int i = 0;
    while(takenSlots[i] != 0){
        cout << takenSlots[i] << endl;
        i++;
    }
}
