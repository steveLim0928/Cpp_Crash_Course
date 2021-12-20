/*

#include "main.hpp"

int main()
{
    string status = "salary"; //options: hourly or salary
    string level;
    level = "hourly";
    Employee *e1; //e1 is now a pointer to Employee object

    if(status == level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  

   ...
}

Let's think about what we are doing here. 
We assign an Employee pointer at the start of the program. 
This allocates memory to an Employee object. 
Then later, we define that same memory location as a manager. 
This should now supersede the previous definition, but it doesn't.

C++ allows dynamic binding through the use of Virtual Functions.

A virtual function is a member function that you expect to be redefined in derived classes.
When you refer to a derived class object using a pointer or a reference to the base class, 
you can call a virtual function for that object and execute the derived class's version of the function.
*/

// https://docs.microsoft.com/en-us/cpp/cpp/virtual-functions?redirectedfrom=MSDN&view=msvc-170

/*Goal: understand virtual functions
*In main.hpp we added the keyword 
*virtual to the function calcWeeklyPay.
*Does this fix the problem?
*/

#include "main.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
    e1->setPayRate(12000.00);
    cout<<"It works!\n";
    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    delete e1;
    return 0;
}