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
    Employee::Display();
    cout << "gun type: " << gun.type << endl;
    cout << "gun ammo: " << gun.ammo << endl;
    cout << "\n--------------\n" << endl;
}
