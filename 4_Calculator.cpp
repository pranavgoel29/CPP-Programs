#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    system("cls");
    char ch;
    float a, b, c, i;
    cout<<"CALCULATOR!"<<endl;
    {
    denominator:
    cout<<"\nEnter first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    op:
    cout<<"Enter an operator(+, -, *, /, %): ";
    cin>>ch;
    switch(ch)
    {
        case '+': c = a+b;
                  cout<<"\nThe sum of the given value is "<<c<<endl;
                  break;
        case '-': c = a-b;
                  cout<<"\nThe difference between the given value is "<<c<<endl;
                  break;
        case '*': c = a*b;
                  cout<<"\nThe product of the given value is "<<c<<endl;
                  break;
        case '/': if(b == 0)
                    {
                        cout<<"\nThe denominator cannot be zero."<<endl;
                        goto denominator;
                    }
                  else
                  c= a/b;
                  cout<<"\nThe quotient of the given value is "<<c<<endl;
                  break;
        case '%': if((int)b==0)
                {
                    cout<<"\nThe denominator cannot be zero."<<endl;
                    goto denominator;
                }
                else
                {
                    c= (int)a % (int)b;
                    cout<<"\nThe remainder of the given value is "<<c<<endl;
                    break;
                }
        default: cout<<"\nYou entered an invalid operator!"<<endl;
                 cout<<"Please choose an valid operator!\n"<<endl;
                 goto op;
    }

    }
    getch();
    return 0;
}
