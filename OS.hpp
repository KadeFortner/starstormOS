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


class OS
{
    
    private:
        double version;
        string user;
        int exit = 0;
        vector<string> history;
    
    public:
    
        //Constuctors
        OS();
        OS(string user);
    
        //Getters
        double getVersion(){return version;}
        string getUser(){return user;}
    
        //Setters
        void setVersion(double version){this->version = version;}
        void setUser(string user){this->user = user;}
        void addToHistory(string command){history.push_back(command);}
    
        //Shows current date and time
        //Works. Cannot set though.
        void dateAndTime();
    
        //Shows Directory
        //Not currently programmed. Bug with reading files in the directory
        void showDirectory();
    
        //Shows the history. Does not currently work. 
        void showHistory();
    
        //Prints the user manual.
        void userManual();
    
        //Uses this for an exit condition.
        int exitCode(){return exit;}
        void exitOS(){exit = 1;}
        void startOS();
    
        //Takes an input, and if able, executes corresponding command.
        void userCommand();
    
        void rename();
    
        //Prints list of commands
        void helpMenu();
    
        //Ends a program
        void endProgram();
};

#endif /* OS_hpp */
