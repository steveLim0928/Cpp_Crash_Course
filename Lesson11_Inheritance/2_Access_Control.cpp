/*
Access Control for Inherited Classes

Let's look at this bit of code from our example:
    
    //The derived class with Student as base class
    class GradStudent : public Student
    {
        private:
            string degree;
        public:
            GradStudent();
            void setDegree(string degreeIn);
            string getDegree();
    };

Notice the line:
    class GradStudent: public Student
The access control before the base class (in this case 'public') 
determines the access of the inherited class.

There are three types of access control: public, private, and protected.

    Public Inheritance means all public members of the base class are accessible to the derived class
    Private Inheritance means all members of the base class are private to the derived class
    Protected Inheritance means all members of the base class are protected to the derived class.

An example of private inheritance.

    //The derived class with Student as base class
    class GradStudent : private Student
    {
        private:
            string degree;
        public:
            GradStudent();
            void setDegree(string degreeIn);
            string getDegree();
            void setStudentId(int idIn); //need this to access Student::setId()
            int getStudentId(); //need this to access Student::getId()
    };
Now that we have a private inheritance, the Student member functions setId() and getID() 
are no longer available to the GradStudent class.

When we write the member functions, we must explicitly refer to the Student class.

    int GradStudent::getStudentId()
    {
        //We must access getId() as a private function
        return Student::getId(); 
    }
    void GradStudent::setStudentId(int idIn)
    {
        //We must access setId() as a private function
        Student::setId(idIn); 
    }

*/
/*Goal: study a simple example if inheritance. 
*/
#include"2_Access_Control.hpp"

int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent gs1;
    
    //Set the id of the grad student
    //using the function in the base class
    gs1.setStudentId(123456789);
    
    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");
    
    cout<<gs1.getStudentId()<<" "<<gs1.getDegree();
    return 0;
}