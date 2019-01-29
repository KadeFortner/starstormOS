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
    version = 1;
}

OS::OS(){
    version = 1;
    user = "GAY FAGGOT MOD BITCH FAGGOT";
}

void OS::dateAndTime(){
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    
    cout << "Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout << "Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;

}

void OS::showDirectory(){
    ofstream outfile ("directory.txt");
    outfile << "titty" << endl;
    outfile.close();
}
