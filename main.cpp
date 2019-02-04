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
    
    OS myOS;
    while(myOS.exitCode() == 0){
        myOS.userCommand();
    }
    return 0;
}
