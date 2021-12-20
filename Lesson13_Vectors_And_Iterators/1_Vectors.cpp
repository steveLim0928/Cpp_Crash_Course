/*
We included a C++ library called vector
To instantiate a vector :
    std::vector<int> vectorInts; 
The vector has size 0 when we instantiate it.
We use 'resize' to change the size of the vector.
*/

/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include <iostream>
#include <vector>


int main ()
{
  //TODO: instantiate vFloat vector
  std::vector<float> vFloat;  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  //Changing the size of vectorInts to 10
  //TODO: Change the size of vFloat to 10 elements
  vFloat.resize(10);
  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";

  return 0;
}

