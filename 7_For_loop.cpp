// Program to print the Nummber from 1 to 10 using "For-loops" 

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int a;                          //Declaring variable a
    for(a = 1; a<=10; ++a)          /* SYNTAX
                                       for(initialisation expression; test-expression; updation-expression)

                                            "Working Of For-Loop"
                                       First we initialize the value of our valriable then we test the condition(test-expression)
                                       if condition is true then loop proceeds to the updation-expression and it keep
                                       running until the condition get false. */

       cout<<"\n"<<a;               // Executes the current value of the variable 'a'.
    return 0;
}