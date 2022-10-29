#include <iostream>  

using namespace std;

int main () {  
    /* local variable definition */
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
       /* Check num value */
       /* After checking this will seclect one case if it matches any condition then it executes that condition else the default condition will be executed */
           switch (num)    
          {    
              case 10: cout<<"It is 10"; break;    
              case 20: cout<<"It is 20"; break;    
              case 30: cout<<"It is 30"; break;    
              default: cout<<"Not 10, 20 or 30"; break;    
          }    
    }    