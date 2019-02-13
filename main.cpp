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

int main(int argc, const char * argv[]) {
    
    /*
    cout << "PKstarstormOS" << endl;
    OS myOS;
    while(myOS.exitCode() == 0){
        myOS.userCommand();
    }
    */
    
    ram myRam;
    cout << myRam.lookAt(0) << endl;
    cout << myRam.lookAt(1) << endl;
    cout << myRam.lookAt(2) << endl;
    cout << myRam.lookAt(3) << endl;
    cout << myRam.lookAt(4) << endl;
    cout << myRam.lookAt(5) << endl;
    myRam.assignRam("xo", 6);
    cout << myRam.lookAt(6) << endl;
    
    return 0;
}
