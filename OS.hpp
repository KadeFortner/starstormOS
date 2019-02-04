
#ifndef OS_hpp
#define OS_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>

using namespace std;


class OS{
    
    static vector<string> history;
    
    private:
        int version;
        string user;
        int exit = 0;
    
    public:
    
        //Constuctors
        OS();
        OS(string user);
    
        //Getters
        int getVersion(){return version;}
        string getUser(){return user;}
    
        //Setters
        void setVerstion(int version){this->version = version;}
        void setUser(string user){this->user = user;}
    
        //Shows current date and time
        //Works. Cannot set though. Want to have date and time as attributes
        void dateAndTime();
    
        //Shows Directory
        //Not currently programmed. Bug with reading files in the directory
        void showDirectory();
    
        //Shows the history. Does not currently work. Having trouble inplementing a vector
        void showHistory();
    
        //Prints the user manual.
        //Works
        void userManual();
    
        //Uses this for an exit condition.
    
        int exitCode(){return exit;}
        void exitOS(){exit = 1;}
    
        //Takes an input, and if able, executes corresponding command.
        void userCommand();
    
        //Prints list of commands
        void helpMenu();
};

#endif /* OS_hpp */
