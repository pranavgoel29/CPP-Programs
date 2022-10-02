#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");                      //for clearing the screen
    float a,b,c;                        /*float is a variable type which is 
                                          used for decimal values*/
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    c=a+b;                              //c is assign as sum of 'a' and 'b'
    cout<<"\nSum of "<<a<<" and "<<b<<" is "<<c;
    getch();                            //getch(); is used here for holding the screen
    return 0;
}