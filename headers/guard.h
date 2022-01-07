#ifndef GUARD_H
#define GUARD_H

#include "employee.h"
#include "gun.h"

using namespace std;

class Guard : public Employee
{
    public:
        Gun gun;

        Guard(string GuardfirstName, string GuardlastName, int GuardnationalID, int GuardcompanyID, string GuardgunType, int GuardgunAmmo);

        Guard();

        void Display();
};

#endif