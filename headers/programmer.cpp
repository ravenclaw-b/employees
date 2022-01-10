#include "programmer.h"

Programmer::Programmer(string ProgrammerfirstName, string ProgrammerlastName, int ProgrammernationalID, int ProgrammercompanyID, string Programmerlanguage, string ProgrammerhasLaptop)
{
    firstName = ProgrammerfirstName;
    lastName = ProgrammerlastName;

    type = "programmer";

    nationalID = ProgrammernationalID;
    companyID = ProgrammercompanyID;

    language = Programmerlanguage;
    hasLaptop = ProgrammerhasLaptop;
}

Programmer::Programmer()
{
    firstName = "";
    lastName = "";

    type = "programmer";

    nationalID = 0;
    companyID = 0;

    language = "";
    hasLaptop = "false";
}

void Programmer::Display()
{
    Employee::Display();
    cout << "language: " << language << endl;
    cout << "has laptop: " << hasLaptop << endl;
    cout << "\n--------------\n" << endl;
}