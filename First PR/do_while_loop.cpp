//Do While
#include<iostream>
using namespace std;
int main()
{
    /* local variable definition */
   int n,i=1;
   cout<<"\nEnter The Limit : ";
   cin>>n;
   cout<<" The number divisible by 2 in the given range are:\n";
   /* check the value of n and checking condition*/
   do
   {
        if(i%2==0)
            cout<<i<<endl;
        i++;
   }while(i<=n);
     return 0;
}