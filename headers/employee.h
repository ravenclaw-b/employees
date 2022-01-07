#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "human.h"

using namespace std;

class Employee : public Human
{
    public:
        int companyID;
        string type;
        
        void Display();
};

#endif