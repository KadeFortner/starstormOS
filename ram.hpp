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

class RAM
{
    
    private:
    string RAMmemory[1000];
    int takenMemory[1000] = {0};
    
    
    
    public:
    RAM();
    string lookAt(int location);
    void assignRAM(string item, int location);
    int lookAtTakenSlot(int location){return takenMemory[location];}
    void numOfTakenSlots();
};




#endif /* ram_hpp */
