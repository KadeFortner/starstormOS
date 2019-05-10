//
//  main.cpp
//  starstormOS
//
//  Created by Kade Fortner on 1/28/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include <iostream>
#include <thread>
#include "OS.hpp"
#include "ram.hpp"
#include "CPU.hpp"
#include "Machine.hpp"
#include "PCB.hpp"

int main(int argc, const char * argv[])
{
    
    CPU myCPU;
    
    myCPU.setA(5);
    myCPU.setPC(12);
    myCPU.setAX(14);
    myCPU.setBX(92);
    myCPU.setCX(1);
    myCPU.setDX(209);
    
    cout << myCPU.getAX() << endl;
    cout << myCPU.getPC() << endl;
    cout << myCPU.getDX() << endl;
    cout << myCPU.getBX() << endl;

    
    
    myCPU.add("ax", "PC");
    myCPU.sub("bx", "dx");
    
    cout << myCPU.getAX() << endl;
    cout << myCPU.getPC()<< endl;
    cout << myCPU.getDX() << endl;
    cout << myCPU.getBX() << endl;
    
    return 0;
}
