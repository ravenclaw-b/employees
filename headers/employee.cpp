#include "employee.h"
#include "human.h"

void Employee::Display()
{
    Human::Display();
    cout << "company ID: " << companyID << endl;
    cout << "type: " << type << endl;
}