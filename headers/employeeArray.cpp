#include "employeeArray.h"

EmployeeArray::EmployeeArray()
{
    filledTo = 0;
}

EmployeeArray::~EmployeeArray()
{
    for(int i=0; i<filledTo; i++)
        delete array[i];
}

void EmployeeArray::add(Employee* employee)
{
    array[filledTo] = employee;
    filledTo++;
}

Employee* EmployeeArray::search(string fullname)
{
    for (int i = 0; i < filledTo; i++)
    {
        if ((*array[i]).firstName + string(" ") + (*array[i]).lastName == fullname)
        {
            return array[i];
        }
    }

    static Employee employee;
    employee.firstName = "null";
    employee.lastName = "void";

    return &employee;
}