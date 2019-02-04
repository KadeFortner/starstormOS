
#include "OS.hpp"
#include <cmath>
#include <ctime>
#include <locale>


OS::OS(string user){
    this->user = user;
    version = 4;
}

OS::OS(){
    version = 4; //0.4, in reality. Will fix.
    user = "KadeTheMod";
}

//Prints current date and time.
void OS::dateAndTime(){
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    
    cout << "Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout << "Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
    //history.push_back("dateAndTime()");

}
/*
void OS::showHistory(){
    //Referenced
    history.push_back("showHistory()");
    cout << "\nVector elements are: ";
    for(int i = 0; i <= history.size(); i++){
        cout << history.front() << endl;
    }
}
*/

void OS::showDirectory(){
    cout << "main.cpp\nos.cpp\nos.hpp\ndirectory.txt\nhistoryIn.txt\nhistoryOut.txt\nrefereferences.txt\n" << endl;
}

void OS::userManual(){
    cout << "starstormOS User Manual" << endl;
    cout << "1. Table of Contents" << endl;
    cout << "2. Overview of the OS" << endl;
    cout << "3. Summary of Commands" << endl;
    cout << "4. Detailed Description of Each Command" << endl;
    cout << "5. Summary of Error Messages" << endl;
    cout << "6. Index" << endl;
    //history.push_back("userManual()");
}

//Used for commands, Referenced.
string toLowercase(string phrase){
    std::string lowerPhrase = "";
    std::locale loc;
    std::string str=phrase;
    //Only does one word for now. Must fix
    for (std::string::size_type i=0; i<str.length(); ++i){
        //std::cout << std::tolower(str[i],loc); For printing
        lowerPhrase = lowerPhrase + std::tolower(str[i],loc);
    }
    return lowerPhrase;
}

void OS::userCommand(){
    string command;
    cout << "do something\n" << endl;
    cin >> command;
    //Changes the command to all lowercase so it can be compared
    command = toLowercase(command);
    if(command == "version"){
        cout << "Version: " << getVersion() << "\n" << endl;
    }
    else if(command == "date"){
        dateAndTime();
    }
    else if(command == "directory"){
        cout << "Not made yet. oops\n" << endl;
    }
    else if(command == "history"){
        cout << "History\n" << endl;
    }
    else if(command == "rename"){
        cout << "Nope. tried to tell you.\n" << endl;
    }
    else if(command == "exit"){
        cout << "bye" << endl;
        exitOS();
    }
    else if(command == "help"){
        helpMenu();
    }
    else{
        cout << "do not understand\n" << endl;
    }
}

void OS::helpMenu(){
    cout << "Here's some commands to try out\nShow the version: try 'version'\nShow the date: try 'date'\nShow the contents of the directory: try 'directory'\nShow the history of commands: try 'history'\nHave a batch file?: try typing in the filename followed by the extention. This will not work though.\nChange or add command names: try 'rename'\nExit: try 'exit'\n" << endl;
    //history.push_back("helpMenu()");
}
