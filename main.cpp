//
//  main.cpp
//  starstormOS
//
//  Created by Kade Fortner on 1/28/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include <iostream>
#include "OS.hpp"
#include "ram.hpp"
#include "CPU.hpp"
#include "Machine.hpp"

int main(int argc, const char * argv[]) {
    
    RAM myRAM;
    
    myRAM.assignRAM("test", 0);
    myRAM.assignRAM("test2", 1);
    myRAM.assignRAM("test3", 10);
    cout << myRAM.lookAt(0) << endl;
    cout << myRAM.lookAt(1) << endl;
    //cout << myRAM.lookAt(11) << endl;
    //cout << myRAM.lookAt(10) << endl;
    myRAM.numOfTakenSlots();
    myRAM.showTakenSlots();
    
    
    return 0;
}

