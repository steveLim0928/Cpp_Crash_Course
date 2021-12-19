/*
A class in C++ is a user defined data type. It can have data and functions.
*/
class ClassName
{
      member1;
      member2;
      ...

public:
     return variable accessFunction1(function parameters);
     return variable accessFunction2(function parameters); 
      ...
} ;

returnVariable ClassName:: accessFunction1(function parameters)
{
    function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
    function statements;
}

...
/*
Rules:
1) Capitalize the first letter of the classname
2) Private members are listed first
3) Use 'getVariableName' for accessing private variables 
4) Use 'setVariableName' for assigning values to private variables
5) signify that the functions are part of the class definition by using the namespace classname::


/*
The default is to make all members private. 
This means only other members of the class can access the data.
*/
class Student
{
        string name;
        int id;
        int gradDate;
};
/*
Functions that access and/or modify data values in classes are called mutators.
So we add the keyword "public" and all members listed after it are accessible:
*/
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string name);

};
/*
Get functions return the data
*/
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};
/*
define the modifying function members
*/
void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}
/*
define the accessing function members
*/
string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}