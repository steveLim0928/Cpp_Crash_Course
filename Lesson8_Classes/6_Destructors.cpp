/*
Destructors are special class functions that are called whenever an object goes out of scope. 
Just like a constructor, a destructor is called automatically.

Destructors cannot:

   - return a value
   - accept parameters

Destructors must have the same name as the class.

destructor is identified with a tilda (~) symbol.
*/

//Declaration
// ~className()  //this is a destructor

//Defining
/*
classname::~classname()
{
     //tasks to be completed before going out of scope
}
*/

/*Goal: use pointers to allot memory locations
*for a class. 
*/

#include "6_Destructors.hpp"

int main()
{
    Dog d2(666666);
    cout<<d2.getLicense();
    return 0;
}