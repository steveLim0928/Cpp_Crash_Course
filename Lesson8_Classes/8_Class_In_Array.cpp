/*
User defined objects can be used just as any other object is used.
*/

/*
For this program, practice using classes by :

    using the Dogs class to create an animal shelter roster.
    add a constructor to the Dogs class. The initial name for a Dog is "Unknown"
    declare and define the function:
    printRoster(roster,SIZE);
*/

/*Goal: practice using the Dogs class. 
**Create an array called roster whose elements are of the type Dogs.
*/

#include "8_Class_In_Array.hpp"


int main()
{
    const int SIZE=3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");

    printRoster(roster,SIZE);
    return 0;
}