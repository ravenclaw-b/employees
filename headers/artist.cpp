#include <iostream>
#include "artist.h"

using namespace std;

Artist::Artist(string ArtistfirstName, string ArtistlastName, int ArtistnationalID, int ArtistcompanyID, string Artistsoftware)
{
    firstName = ArtistfirstName;
    lastName = ArtistlastName;

    type = "artist";

    nationalID = ArtistnationalID;
    companyID = ArtistcompanyID;

    software = Artistsoftware;
}


Artist::Artist()
{
    firstName = "";
    lastName = "";

    type = "artist";

    nationalID = 0;
    companyID = 0;

    software = "";
}

void Artist::Display()
{
    Employee::Display();
    cout << "software: " << software << endl;
    cout << "\n--------------\n" << endl;
}
