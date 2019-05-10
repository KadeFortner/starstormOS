//
//  CPU.cpp
//  starstormOS
//
//  Created by Kade Fortner on 2/13/19.
//  Copyright © 2019 Kade Fortner. All rights reserved.
//

#include "CPU.hpp"
#include "ram.hpp"

CPU::CPU()
{
    cout << "CPU has been made" << endl;
}

void CPU::set(string location, int value)
{
    if(location == "ax")
    {
        setAX(value);
    }
    else if(location == "bx")
    {
        setBX(value);
    }
    else if(location == "cx")
    {
        setCX(value);
    }
    else if(location == "dx")
    {
        setDX(value);
    }
    else if(location == "PC")
    {
        setPC(value);
    }
    else if(location == "A")
    {
        setA(value);
    }
    /*
     else if(r == "R"){
     ram.assignRAM(s, text.substr())
     }
     */
}

void CPU::mov(string location,string location2)
{
    if(location == "ax")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            setAX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            setAX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            setAX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            setAX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            setAX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            setAX(value);
        }
    }
    else if(location == "bx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            setBX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            setBX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            setBX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            setBX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            setBX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            setBX(value);
        }
    }
    else if(location == "cx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            setCX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            setCX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            setCX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            setCX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            setCX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            setCX(value);
        }
    }
    else if(location == "dx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            setDX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            setDX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            setDX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            setDX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            setDX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            setDX(value);
        }
        
    }
    else cout << "Does not work" << endl;
}

void CPU::add(string location, string location2)
{
    if(location == "ax")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value + getA();
            setAX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value + getA();
            setAX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value + getA();
            setAX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value + getA();
            setAX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value + getA();
            setAX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value + getA();
            setAX(value);
        }
    }
    else if(location == "bx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value + getA();
            setBX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value + getA();
            setBX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value + getA();
            setBX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value + getA();
            setBX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value + getA();
            setBX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value + getA();
            setBX(value);
        }
    }
    else if(location == "cx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value + getA();
            setCX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value + getA();
            setCX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value + getA();
            setCX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value + getA();
            setCX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value + getA();
            setCX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value + getA();
            setCX(value);
        }
    }
    else if(location == "dx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value + getA();
            setDX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value + getA();
            setDX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value + getA();
            setDX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value + getA();
            setDX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value + getA();
            setDX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value + getA();
            setDX(value);
        }
    }
    else cout << "Does not work" << endl;
}

void CPU::sub(string location, string location2)
{
    if(location == "ax")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value - getA();
            setAX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value - getA();
            setAX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value - getA();
            setAX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value - getA();
            setAX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value - getA();
            setAX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value - getA();
            setAX(value);
        }
    }
    else if(location == "bx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value - getA();
            setBX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value - getA();
            setBX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value - getA();
            setBX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value - getA();
            setBX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value - getA();
            setBX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value - getA();
            setBX(value);
        }
    }
    else if(location == "cx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value - getA();
            setCX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value - getA();
            setCX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value - getA();
            setCX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value - getA();
            setCX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value - getA();
            setCX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value - getA();
            setCX(value);
        }
    }
    else if(location == "dx")
    {
        if(location2 == "ax")
        {
            int value = getAX();
            value = value - getA();
            setDX(value);
        }
        else if(location2 == "bx")
        {
            int value = getBX();
            value = value - getA();
            setDX(value);
        }
        else if(location2 == "cx")
        {
            int value = getCX();
            value = value - getA();
            setDX(value);
        }
        else if(location2 == "dx")
        {
            int value = getDX();
            value = value - getA();
            setDX(value);
        }
        else if(location2 == "PC")
        {
            int value = getPC();
            value = value - getA();
            setDX(value);
        }
        else if(location2 == "A")
        {
            int value = getA();
            value = value - getA();
            setDX(value);
        }
    }
    else cout << "Does not work" << endl;
}

void CPU::jmp()
{
    setPC(getA());
}

void CPU::jgt(string location)
{
    if(location == "ax")
    {
        if(getAX() > 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() > 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() > 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() > 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() > 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() > 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::jeq(string location)
{
    if(location == "ax")
    {
        if(getAX() == 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() == 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() == 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() == 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() == 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() > 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::jge(string location)
{
    if(location == "ax")
    {
        if(getAX() >= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() >= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() >= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() >= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() >= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() >= 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::jlt(string location)
{
    if(location == "ax")
    {
        if(getAX() < 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() < 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() < 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() < 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() < 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() < 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::jne(string location)
{
    if(location == "ax")
    {
        if(getAX() != 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() != 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() != 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() != 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() != 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() != 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::jle(string location)
{
    if(location == "ax")
    {
        if(getAX() <= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "bx")
    {
        if(getBX() <= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "cx")
    {
        if(getCX() <= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "dx")
    {
        if(getDX() <= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "PC")
    {
        if(getPC() <= 0)
        {
            setPC(getA());
        }
    }
    else if(location == "A")
    {
        if(getA() <= 0)
        {
            setPC(getA());
        }
    }
    else cout << "error" << endl;
}

void CPU::out(string location)
{
    if(location == "ax")
    {
        cout << getAX() << endl;
    }
    else if(location == "bx")
    {
        cout << getBX() << endl;
    }
    else if(location == "cx")
    {
        cout << getCX() << endl;
    }
    else if(location == "dx")
    {
        cout << getDX() << endl;
    }
    else if(location == "PC")
    {
        cout << getPC() << endl;
    }
    else if(location == "A")
    {
        cout << getA() << endl;
    }
    else cout << "Error in CPU::out" << endl;


}
