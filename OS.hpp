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
#include <ctime>

using namespace std;

//time_t t = time(NULL);
//tm* timePtr = localtime(&t);

class OS{
private:
    int version;
    string user;
    int exit = 0;
    /*
    static vector<string> history;
    int day = timePtr->tm_mday;
    int month = timePtr->tm_year;
    int year = (timePtr->tm_mon)+1900;
    int hour = timePtr->tm_hour;
    int min = timePtr->tm_min;
    int sec = timePtr->tm_sec;
    */
    
public:
    OS();
    OS(string user);
    int getVersion(){return version;}
    string getUser(){return user;}
    //void dateAndTime();
    //void showDirectory();
    void showHistory();
    void userManual();
    //exitCode will be used to end the OS if the user wishes to quit the program.
    int exitCode(){return exit;}
    void exitOS(){exit = 1;}
    //This will take the typed in command of the user, and execute it
    void userCommand();
};

#endif /* OS_hpp */
