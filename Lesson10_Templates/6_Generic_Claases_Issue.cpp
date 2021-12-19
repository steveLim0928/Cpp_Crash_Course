/*
There is an issue with generic classes that I would like to talk about. 
It has to do with arrays.

Recall, compilers need to know what variable type and how many elements are required for an array 
at compile time. 
The information is necessary to allocate memory for the array.

The program below will not compile without errors. 
As you will see, we get an odd error associated with the variables in the class.
*/

/*Goal: understand an
**issue with memory allocation
**in generic classes
*/
/***This code will not compile without errors*****/
#include "6_Generic_Claases_Issue.hpp"

int main()
{
    //StudentRecord is the generic class
    StudentRecord<int> srInt();
    srInt.setId(111111);
    int arrayInt[SIZE]={4,3,2,1,4};
    srInt.setGrades(arrayInt);
    srInt.printGrades();
 
    StudentRecord<char> srChar();
    srChar.setId(222222);
    char arrayChar[SIZE]={'A','B','C','D','F'};
    srChar.setGrades(arrayChar);
    srChar.printGrades();
   
    StudentRecord<float> srFloat();
    srFloat.setId(333333);
    float arrayFloat[SIZE]={2.75,4.0,3.7,2.8,3.99};
    srFloat.setGrades(arrayFloat);
    srFloat.printGrades();
    
    StudentRecord<string> srString();
    srString.setId(4444);
    string arrayString[SIZE]={"B","B-","C+","B","A"};
    srString.setGrades(arrayString);
    srString.printGrades();
    
    return 0;
}
