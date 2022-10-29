#include <iostream>

using namespace std;
 
int main () {

   /* local variable definition */
   int a;
   cout<<"Enter your value :" ;
   cin>> a;
 
   /* check the boolean condition */
   if( a < 20 ) {
      /* if condition is true then print the following */
      cout<<"a is less than 20 " ;
   } else {
      /* if condition is false then print the following */
      cout<<"a is not less than 20 " ;
   }
   
   cout<<"\n value of a is : " << a ;
 
   return 0;
}