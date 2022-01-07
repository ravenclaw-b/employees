#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <iostream>
#include "employee.h"

using namespace std;

class Programmer : public Employee
{
    public:
        string language;
        string hasLaptop;

        Programmer(string ProgrammerfirstName, string ProgrammerlastName, int ProgrammernationalID, int ProgrammercompanyID, string Programmerlanguage, string ProgrammerhasLaptop);

        Programmer();

        void Display();
};

#endif