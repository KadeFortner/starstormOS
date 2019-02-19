//
//  CPU.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/13/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "CPU.hpp"
#include "ram.hpp"

CPU::CPU(){
    cout << "CPU has been made" << endl;
}

void CPU::set(string location, int value){
    std::string s = std::to_string(value); //referenced
    if(location == "ax"){
        ax = s;
    }
    else if(location == "bx"){
        bx = s;
    }
    else if(location == "cx"){
        cx = s;
    }
    else if(location == "dx"){
        dx = s;
    }
    else if(location == "PC"){
        PC = value;
    }
    else if(location == "A"){
        A = value;
    }
}

void CPU::mov(string location,string location2){
    
    if(location == "ax"){
        if(location2 == "ax"){
            location2 = getAX();
            setAX(location2);
        }
        else if(location2 == "bx"){
            location2 = getBX();
            setAX(location2);
        }
        else if(location2 == "cx"){
            location2 = getCX();
            setAX(location2);
        }
        else if(location2 == "dx"){
            location2 = getDX();
            setAX(location2);
        }
        else if(location2 == "PC"){
            int value = getPC();
            std::string s = std::to_string(value);
            setAX(s);
        }
        else if(location2 == "A"){
            int value = getA();
            std::string s = std::to_string(value);
            setAX(s);
        }
    }
    else if(location == "bx"){
        if(location2 == "ax"){
            location2 = getAX();
            setBX(location2);
        }
        else if(location2 == "bx"){
            location2 = getBX();
            setBX(location2);
        }
        else if(location2 == "cx"){
            location2 = getCX();
            setBX(location2);
        }
        else if(location2 == "dx"){
            location2 = getDX();
            setBX(location2);
        }
        else if(location2 == "PC"){
            int value = getPC();
            std::string s = std::to_string(value);
            setBX(s);
        }
        else if(location2 == "A"){
            int value = getA();
            std::string s = std::to_string(value);
            setBX(s);
        }
    }
    else if(location == "cx"){
        if(location2 == "ax"){
            location2 = getAX();
            setCX(location2);
        }
        else if(location2 == "bx"){
            location2 = getBX();
            setCX(location2);
        }
        else if(location2 == "cx"){
            location2 = getCX();
            setCX(location2);
        }
        else if(location2 == "dx"){
            location2 = getDX();
            setCX(location2);
        }
        else if(location2 == "PC"){
            int value = getPC();
            std::string s = std::to_string(value);
            setCX(s);
        }
        else if(location2 == "A"){
            int value = getA();
            std::string s = std::to_string(value);
            setCX(s);
        }
    }
    else if(location == "dx"){
        if(location2 == "ax"){
            location2 = getAX();
            setDX(location2);
        }
        else if(location2 == "bx"){
            location2 = getBX();
            setDX(location2);
        }
        else if(location2 == "cx"){
            location2 = getCX();
            setDX(location2);
        }
        else if(location2 == "dx"){
            location2 = getDX();
            setDX(location2);
        }
        else if(location2 == "PC"){
            int value = getPC();
            std::string s = std::to_string(value);
            setDX(s);
        }
        else if(location2 == "A"){
            int value = getA();
            std::string s = std::to_string(value);
            setDX(s);
        }
    }
    
    else{
        cout << "Does not work" << endl;
    }
}

void CPU::jmp(){
    setPC(getA());
}

void CPU::jgt(int s){
    if(s > 0){
        setPC(getA());
    }
    else{
        cout << "Nope" << endl;
    }
}

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
