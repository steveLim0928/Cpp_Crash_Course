 /*GOAL: Practice writing functions

 /*Write a function that prints the results of the multiplication 
 **of two integers. 
 */

 #include "4_Func_To_Header.hpp"

 int main()
 {
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    //call the function
    printProduct(m1, m2, product);
    return 0;
 }