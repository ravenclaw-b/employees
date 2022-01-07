#include <iostream>

#include "headers/programmer.h"
#include "headers/guard.h"
#include "headers/artist.h"
#include "headers/employeeArray.h"

using namespace std;

int main()
{
    string answer;

    EmployeeArray employeeArray;

    while (true)
    {
        cout << "new, check, or done?: ";
        cin >> answer;

        while (answer != "new" && answer != "done" && answer != "check")
        {
            cout << "new, check, or done?: ";
            cin >> answer;
        }

        if (answer == "check") 
        {
            string firstName = "";
            string secondName = "";

            cout << "full name: ";
            cin >> firstName >> secondName;

            string fullname = firstName + " " + secondName;

            Employee* employee;
            employee = employeeArray.search(fullname);

            if(employee->firstName == "null" && employee->lastName == "void")
                cout << "person not found" << endl;
            else
            {
                if (employee->type == "guard")
                {
                    ((Guard*)employee)->Display();
                }

                if (employee->type == "artist")
                {
                    ((Artist*)employee)->Display();
                }

                if (employee->type == "programmer")
                {
                    ((Programmer*)employee)->Display();
                }
            }
        }

        else if (answer == "new")
        {

            while (answer != "guard" && answer != "programmer" && answer != "artist")
            {
                cout << "programmer, guard, or artist?: ";
                cin >> answer;
            }
            
            string firstName;
            string lastName;
            int companyID;
            int nationalID;

            cout << "first name: ";
            cin >> firstName;

            cout << "last name: ";
            cin >> lastName;

            cout << "company ID: ";
            cin >> companyID;

            cout << "national ID: ";
            cin >> nationalID;

            if(answer == "guard")
            {
                string gunType;
                int gunAmmo;

                cout << "gun type: ";
                cin >> gunType;

                cout << "gun ammo: ";
                cin >> gunAmmo;

                Guard* guard = new Guard(firstName, lastName, nationalID, companyID, gunType, gunAmmo);
                employeeArray.add(guard);
            }

            if(answer == "programmer")
            {
                string language;
                string hasLaptop;

                cout << "languge: ";
                cin >> language;

                cout << "has laptop (true or false): ";
                cin >> hasLaptop;

                Programmer* programmer = new Programmer(firstName, lastName, nationalID, companyID, language, hasLaptop);
                employeeArray.add(programmer);
            }

            if(answer == "artist")
            {
                string program;

                cout << "program: ";
                cin >> program;

                Artist* artist = new Artist(firstName, lastName, nationalID, companyID, program);
                employeeArray.add(artist);
            }

        }
        else
        {
            break;
        }
        cout << endl;
    }
}