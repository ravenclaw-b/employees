#ifndef EMPLOYEEARRAY_H
#define EMPLOYEEARRAY_H

#include "employee.h"

class EmployeeArray
{
    private:
        int filledTo = 0;

    public:
        Employee* array[100];

        EmployeeArray();
        ~EmployeeArray();
        
        void add(Employee* employee);

        Employee* search(string fullname);
};

#endif