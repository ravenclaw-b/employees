#include "guard.h"

Guard::Guard(string GuardfirstName, string GuardlastName, int GuardnationalID, int GuardcompanyID, string GuardgunType, int GuardgunAmmo)
{
    firstName = GuardfirstName;
    lastName = GuardlastName;

    type = "guard";
    
    nationalID = GuardnationalID;
    companyID = GuardcompanyID;

    gun.type = GuardgunType;
    gun.ammo = GuardgunAmmo;
}

Guard::Guard()
{
    firstName = "empty";
    lastName = "empty";

    type = "guard";

    nationalID = 0;
    companyID = 0;

    gun.type = "";
    gun.ammo = 0;
}

void Guard::Display()
{
    cout << "----------------\n" << endl;

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "type: " << type << endl;
    cout << "national ID: " << nationalID << endl;
    cout << "company ID: " << companyID << endl;

    cout << "gun type: " << gun.type << endl;
    cout << "gun ammo: " << gun.ammo << endl;

    cout << "\n--------------\n" << endl;
}
