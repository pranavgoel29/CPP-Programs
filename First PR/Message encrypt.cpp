// Program to encrypt messages given as input by rolling each character in a given number of characters

#include <iostream>
#include <string>
using namespace std;

void *charencode(int k, string character)
{
    int n;
    cout<<character<<endl<<endl;
    n = character.length();
    string copy;
    for(int i = 0; i<=n; i++)
    {
        if(isalpha(character[i])) //checking whether it is alphabet
        {

            if(islower(character[i])) // checking whether it is an upper or lower case alphabet
            {
            if((character[i]+k)>=122) //if the ASCII value goes beyond the lower case alphabet range
               copy[i] = char((character[i]+k)-122+96);
            else
                copy[i] = char(character[i]+k);
            }
            else
                if((character[i]+k)>=90)//if the ASCII value goes beyond the upper case alphabet range
                
            copy[i] = char((character[i]+k)-90+66);
                
                else
                    copy[i] = char(character[i]+k);
        }
        else
        copy[i] = character[i];
    }

    printf("%s\n",copy.c_str());
    cout<<copy<<endl;
    return 0;
}


int main()
{
    int no_of_characters, no_of_testcases, char_increment;

    cout<<"enter the no of test cases\n";
    cin>>no_of_testcases;
    for(int i =0; i<no_of_testcases; i++)
    {
        cout<<"Enter the no of characters\n";
        cin>>no_of_characters;
        string ch;

        cout<<"enter the the increment in characters\n";
        cin>>char_increment;
        char_increment%=26;

        cout<<"Enter the message\n";
        cin.ignore(1);
        getline(cin,ch,'\n');
        charencode(char_increment,ch);
    }
}
