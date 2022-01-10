#ifndef ARTIST_H
#define ARTIST_H

#include "human.h"
#include "employee.h"

class Artist : public Employee
{
    private:
        string software;

    public:
        Artist(string ArtistfirstName, string ArtistlastName, int ArtistnationalID, int ArtistcompanyID, string Artistsoftware);

        Artist();

        void Display();
};

#endif