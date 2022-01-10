#include "employee.h"

void Employee::Display()
{
    cout << "----------------\n" << endl;

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "type: " << type << endl;
    cout << "national ID: " << nationalID << endl;
    cout << "company ID: " << companyID << endl;
}