#include "employeeArray.h"

EmployeeArray::EmployeeArray()
{

}

EmployeeArray::~EmployeeArray()
{
    for(int i = 0; i < employeeVector.size(); i++)
        delete employeeVector[i];
}

void EmployeeArray::add(Employee* employee)
{
    employeeVector.push_back(employee);
}

Employee* EmployeeArray::search(string fullname)
{
    for (int i = 0; i < employeeVector.size(); i++)
    {
        if ((*employeeVector[i]).firstName + string(" ") + (*employeeVector[i]).lastName == fullname)
        {
            return employeeVector[i];
        }
    }

    static Employee employee;
    employee.firstName = "null";
    employee.lastName = "void";

    return &employee;
}