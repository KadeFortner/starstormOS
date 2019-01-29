//
//  OS.hpp
//  starstormOS
//
//  Created by Kade Fortner on 1/28/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#ifndef OS_hpp
#define OS_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class OS{
private:
    int version;
    string user;
    static vector<string> history;
    
public:
    OS();
    OS(string user);
    int getVersion(){return version;}
    string getUser(){return user;}
    void dateAndTime();
    void showDirectory();
    void showHistory();
};

#endif /* OS_hpp */
