//
//  Machine.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/22/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "Machine.hpp"

Machine::Machine(){
    cout << "Machine has been made." << endl;
}

void Machine::set(string location, int value){
    
    std::string s = std::to_string(value); //referenced
    std::string text(location); //referenced
    string r = text.substr(0);
    
    //string rLocation = text.substr(
    
    if(location == "ax"){
        cpu.setAX(s);
        cout << r << endl;
    }
    else if(location == "bx"){
        cpu.setBX(s);
    }
    else if(location == "cx"){
        cpu.setCX(s);
    }
    else if(location == "dx"){
        cpu.setDX(s);
    }
    else if(location == "PC"){
        cpu.setPC(value);
    }
    else if(location == "A"){
        cpu.setA(value);
    }
    /*
    else if(r == "R"){
        ram.assignRAM(s, text.substr())
    }
    */
}

void Machine::mov(string location,string location2){
    if(location == "ax"){
        if(location2 == "ax"){
            location2 = cpu.getAX();
            cpu.setAX(location2);
        }
        else if(location2 == "bx"){
            location2 = cpu.getBX();
            cpu.setAX(location2);
        }
        else if(location2 == "cx"){
            location2 = cpu.getCX();
            cpu.setAX(location2);
        }
        else if(location2 == "dx"){
            location2 = cpu.getDX();
            cpu.setAX(location2);
        }
        else if(location2 == "PC"){
            int value = cpu.getPC();
            std::string s = std::to_string(value);
            cpu.setAX(s);
        }
        else if(location2 == "A"){
            int value = cpu.getA();
            std::string s = std::to_string(value);
            cpu.setAX(s);
        }
    }
    else if(location == "bx"){
        if(location2 == "ax"){
            location2 = cpu.getAX();
            cpu.setBX(location2);
        }
        else if(location2 == "bx"){
            location2 = cpu.getBX();
            cpu.setBX(location2);
        }
        else if(location2 == "cx"){
            location2 = cpu.getCX();
            cpu.setBX(location2);
        }
        else if(location2 == "dx"){
            location2 = cpu.getDX();
            cpu.setBX(location2);
        }
        else if(location2 == "PC"){
            int value = cpu.getPC();
            std::string s = std::to_string(value);
            cpu.setBX(s);
        }
        else if(location2 == "A"){
            int value = cpu.getA();
            std::string s = std::to_string(value);
            cpu.setBX(s);
        }
    }
    else if(location == "cx"){
        if(location2 == "ax"){
            location2 = cpu.getAX();
            cpu.setCX(location2);
        }
        else if(location2 == "bx"){
            location2 = cpu.getBX();
            cpu.setCX(location2);
        }
        else if(location2 == "cx"){
            location2 = cpu.getCX();
            cpu.setCX(location2);
        }
        else if(location2 == "dx"){
            location2 = cpu.getDX();
            cpu.setCX(location2);
        }
        else if(location2 == "PC"){
            int value = cpu.getPC();
            std::string s = std::to_string(value);
            cpu.setCX(s);
        }
        else if(location2 == "A"){
            int value = cpu.getA();
            std::string s = std::to_string(value);
            cpu.setCX(s);
        }
    }
    else if(location == "dx"){
        if(location2 == "ax"){
            location2 = cpu.getAX();
            cpu.setDX(location2);
        }
        else if(location2 == "bx"){
            location2 = cpu.getBX();
            cpu.setDX(location2);
        }
        else if(location2 == "cx"){
            location2 = cpu.getCX();
            cpu.setDX(location2);
        }
        else if(location2 == "dx"){
            location2 = cpu.getDX();
            cpu.setDX(location2);
        }
        else if(location2 == "PC"){
            int value = cpu.getPC();
            std::string s = std::to_string(value);
            cpu.setDX(s);
        }
        else if(location2 == "A"){
            int value = cpu.getA();
            std::string s = std::to_string(value);
            cpu.setDX(s);
        }
        
    }
    
    else{
        cout << "Does not work" << endl;
    }
}


void Machine::jmp(){
    cpu.setPC(cpu.getA());
}

void Machine::jgt(int s){
    if(s > 0){
        cpu.setPC(cpu.getA());
    }
    else{
        cout << "Nope" << endl;
    }
}
/*
void CPU::jeq(int s){
    if(s == 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

void CPU::jge(int s){
    if(s >= 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

void CPU::jlt(int s){
    if(s < 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

void CPU::jne(int s){
    if(s != 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

void CPU::jle(int s){
    if(s <= 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

void CPU::out(int s){
    cout << s << endl;
}
*/
