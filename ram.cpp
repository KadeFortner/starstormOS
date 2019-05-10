//
//  ram.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/4/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "ram.hpp"

RAM::RAM()
{
    cout << "The RAM has been made and has 1000 spots available" << endl;
}

string RAM::lookAt(int location)
{
    return RAMmemory[location];
}

void RAM::assignRAM(string item, int location)
{
    RAMmemory[location] = item; //The chosen item is added into the designated location in RAM
    cout << "The item has been inserted into the RAM successfully" << endl;
    int i = 0;
    while(takenMemory[i] != 0)
    { //While the current spot in takenSlots is not free, go to the next spot until free
        i++;
    }
    cout << "The current location is: " << location << endl;
    cout <<"The current i value is: " << i << endl;
    takenMemory[i+1] = location; //The item i will be inserted into Taken Slots @ position i
    cout << "Taken Slots has been updated" << endl;
}


void RAM::numOfTakenSlots()
{
    int i = 0;
    while(takenMemory[i] != 0)
    {
        i++;
    }
    cout << "There are " << i << " taken slots in RAM" << endl;
}


