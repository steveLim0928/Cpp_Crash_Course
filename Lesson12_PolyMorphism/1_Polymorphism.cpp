/*
Let's begin with an example of inheritance that will highlight the need for polymorphism.
In the program below we have two classes; Employee and Manager.

A manager is an employee, so we can use inheritance to derive the Manager class from the Employee class. The difference between the two classes lies in the payRate. Employees are paid an hourly wage, managers are paid a salary.

The weekly pay for an employee is calculated as:
       pay = PayRate * HoursWorked

For the manager weekly pay is calculated as:

       pay = Salary / 52

It would be nice if we didn't have to specify which type of employee when we instantiated an object. 
It would be nice if we could just say employee, since both are employees.
*/

/*Goal: look an example of inheritance
* that highlights the need for polymorphism.
*/

/*We can change the code as shown below, 
*but now we have to maintain two
*branches of the same code, one for 
*each type of employee. 
*/

#include "1_Polymorphism.hpp"

int main()
{
    const string status = "salary";
    string level;
    level = "salary";
    
    if(status != level)
    {
        Employee e1;
        e1.setPayRate(10.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }
    else
    {
        Manager e1;
        e1.setPayRate(12000.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }    


    return 0;
}

// PROBLEM
// Well, that worked, but we now we have to maintain a different branch for each employee type.
// POINTER TYPE DOES NOT WORK WITHOUT VIRTUAL