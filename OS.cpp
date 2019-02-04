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


OS::OS(string user){
    this->user = user;
    version = 3;
}

OS::OS(){
    version = 3;
    user = "KadeTheMod";
}

/*
void OS::dateAndTime(){
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    
    cout << "Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout << "Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;

}
 */
/*
void OS::showDirectory(){
    ofstream outfile ("directory.txt");
    outfile << "test" << endl;
    outfile.close();
}
 */

void OS::showHistory(){
    
    string inFileName = "historyIn.txt";
    string outFileName = "historyIn.txt";
    
    
    ifstream inData;
    ofstream outData;
    
    
    inData.open(inFileName.c_str());
    outData.open(outFileName.c_str());
    
    
    string line = "";
    
    
    if(inData.is_open()){  //check to see if the file is open
        if(outData.is_open()){
            while( getline(inData, line)){
                outData << line;
                outData << '\n';
            }
        }
        else{
            cout << "Output File Error" << '\n';
        }
    }
    else{
        cout << "Input File Not Found" << '\n';
    }
    
    inData.close();
    outData.close();
}


void OS::userManual(){
    cout << "starstormOS User Manual" << endl;
    cout << "1. Table of Contents" << endl;
    cout << "2. Overview of the OS" << endl;
    cout << "3. Summary of Commands" << endl;
    cout << "4. Detailed Description of Each Command" << endl;
    cout << "5. Summary of Error Messages" << endl;
    cout << "6. Index" << endl;
}

void OS::userCommand(){
    string command;
    cout << "Choose any command!: " << endl;
    cin >> command;
    //Will take command, lowercase everything, then somehow make the program execute the command
}
