/*
In C++, we can create generic classes as well as functions
We use the same template type placeholder as we did for functions.

If the class is going to accept strings, we need to include the 'using namespace' compiler directive, 
or it will not recognize the string variable.

    //header file for main.cpp
    #include<iostream>

    //The class accepts strings, so we need to use namespace
    using namespace std;

We use "template for classes

    //tell compiler this class uses a generic value
    template <class T>
    class StudentRecord
    {
        private:
            const int size = 5;
            T grade;
            int studentId;
        public:
        //note: I used a constructor that accepts the grade input
            StudentRecord(T input);
            void setId(int idIn);
            void printGrades();
    };

Just as with non-generic classes, we have private and public members. 
To signify the variable type that is changable, use the name you assigned in the template command. 
In our case, this is T.

*The member functions must all be treated as generic functions. 
You will have to add the template command to each member function.

    template<class T>
    StudentRecord<T>::StudentRecord(T input)
    {
        grade=input;
    }

    //Notice I still add the template<class T here, even though this is not a generic //function. It is in a generic class. 

    template<class T>
    void StudentRecord<T>::setId(int idIn)
    {
        studentId = idIn;
    }

    template<class T>
    void StudentRecord<T>::printGrades()
    {
        cout<<"ID# "<<studentId<<": ";
        cout<<grade<<"\n ";
        cout<<"\n";
    }
*/

/*Goal: examine generic classes.
*/

/*Goal: study generic classes*/

#include "4_Generic_Classes.hpp"

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(3);
    srInt.setId(111111);
    srInt.printGrades();
 
    StudentRecord<char> srChar('B');
    srChar.setId(222222);
    srChar.printGrades();

    StudentRecord<float> srFloat(3.333);
    srFloat.setId(333333);
    srFloat.printGrades();
    
    StudentRecord<string> srString("B-");
    srString.setId(4444);
    srString.printGrades();
    
    return 0;
}
