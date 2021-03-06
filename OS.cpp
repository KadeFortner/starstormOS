//
//  OS.cpp
//  starstormOS
//
//  Created by Kade Fortner on 1/28/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "OS.hpp"
#include <cmath>
#include <ctime>
#include <locale>


OS::OS(string user)
{
    this->user = user;
    version = 0.99;
}

OS::OS()
{
    version = 0.99; //With Multi-Threading maybe. And working history
    user = "KadeTheMod";
    startOS();
}

//Prints current date and time.
void OS::dateAndTime()
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    
    cout << "Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout << "Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
    addToHistory("dateAndTime()");
}


void OS::showHistory()
{
    //Referenced
    addToHistory("showHistory()");
    cout << "\nHistory so far is: \n";
    vector<string>::const_iterator i = history.begin();
    while(i != history.end())
    {
        cout << *i << '\n';
        i++;
    }
}


void OS::showDirectory()
{
    cout << "main.cpp\nos.cpp\nos.hpp\ndirectory.txt\nhistoryIn.txt\nhistoryOut.txt\nreferences.txt\n" << endl;
    addToHistory("showDirectory()");
}

void OS::userManual()
{
    cout << "starstormOS User Manual" << endl;
    cout << "1. Table of Contents" << endl;
    cout << "2. Overview of the OS" << endl;
    cout << "3. Summary of Commands" << endl;
    cout << "4. Detailed Description of Each Command" << endl;
    cout << "5. Summary of Error Messages" << endl;
    cout << "6. Index" << endl;
    addToHistory("userManual()");
}

//Used for commands, Referenced.
string toLowercase(string phrase)
{
    string lowerPhrase = "";
    locale loc;
    string str=phrase;
    //Only does one word for now. Must fix
    for (string::size_type i=0; i<str.length(); ++i)
    {
        lowerPhrase = lowerPhrase + tolower(str[i],loc);
    }
    return lowerPhrase;
}

void OS::userCommand()
{
    string command;
    cout << "Do something!\n" << endl;
    cin >> command;
    //Changes the command to all lowercase so it can be compared
    command = toLowercase(command);
    if(command == "version")
    {
        cout << "Version: " << getVersion() << "\n" << endl;
        addToHistory("getVersion()");
    }
    else if(command == "date")
    {
        dateAndTime();
    }
    else if(command == "directory")
    {
        cout << "Not made yet. oops\n" << endl;
    }
    else if(command == "history")
    {
        showHistory();
    }
    else if(command == "rename")
    {
        cout << "please help" << endl;
    }
    else if(command == "exit")
    {
        cout << "bye\n" << endl;
        exitOS();
    }
    else if(command == "help")
    {
        helpMenu();
    }
    else if(command == "manual")
    {
        userManual();
    }
    else
    {
        cout << "do not understand\n" << endl;
    }
}

void OS::helpMenu()
{
    cout << "Here's some commands to try out\nShow the version: try 'version'\nShow the date: try 'date'\nShow the contents of the directory: try 'directory'\nShow the history of commands: try 'history'\nHave a batch file?: try typing in the filename followed by the extention. This will not work though.\nChange or add command names: try 'rename'\nExit: try 'exit'\n" << endl;
    addToHistory("helpMenu()");
}

void OS::endProgram()
{
    exitOS();
    startOS();
    userManual();
}

void OS::startOS()
{
    exit = 0;
    cout << "Welcome to PKstarstormOS!" << endl;
    while(exit == 0)
    {
        userCommand();
    }
}
