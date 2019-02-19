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

class RAM{
    
    private:
    string RAMmemory[30];
    
    
    public:
    RAM();
    string lookAt(int location);
    void assignRAM(string item, int location);
};




#endif /* ram_hpp */
