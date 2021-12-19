/*Goal: examine constructors with parameters*/

#include "12_Constructors_With_Parameters.hpp"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");  
    cout<<p1.getName();
    return 0;
}