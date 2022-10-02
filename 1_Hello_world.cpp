#include <iostream>      // For input and output

#include <conio.h>       // Header file for getch()

using namespace std;    // For declaring all variable standard

int main()              /* Means that out funct. needs to return some integer at the end of the execution */

{
    system("cls");      //clear the content on the screen every time when we run the programme

    cout<<"HELLO WORLD!!"; // Double quotes used for a string

    getch();            /* It holds the programme execution until you enter a character
                        not compulsary but helpful when you have so many inputs and 
                        holds the screen to which is its side-effect */

    return 0;           /* It reurns the value to the main function 
                        It also tells that programme has been finished */
}
