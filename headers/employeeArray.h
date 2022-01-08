#ifndef EMPLOYEEARRAY_H
#define EMPLOYEEARRAY_H

#include "employee.h"
#include <vector>

class EmployeeArray
{

    public:
        vector<Employee*> employeeVector;

        EmployeeArray();
        ~EmployeeArray();
        
        void add(Employee* employee);

        Employee* search(string fullname);
};

#endif