//
//  main.cpp
//  starstormOS
//
//  Created by Kade Fortner on 1/28/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include <iostream>
#include "OS.hpp"

int main(int argc, const char * argv[]) {
    
    cout << "Hello, World!\n" << endl;
    OS myOS;
    while(myOS.exitCode() == 0){
        cout << "Welcome to starstormOS" << endl;
        cout << "This is version: " << myOS.getVersion() << endl;
        cout << "The user is: " << myOS.getUser() << endl;
        myOS.showHistory();
        //myOS.userManual();
        //myOS.userCommand();
        myOS.exitOS();
        
    }
    return 0;
}
