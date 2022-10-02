//Programme to find distance between two point through their coordinates.
#include<iostream>                           // For basic input/output
#include<math.h>                             // For clearing screen function
#include<stdlib.h>                           // For using mathematical expression

using namespace std;

int main()
{
    system("cls");                          // To clear screen
    double distance, x1, x2, y1, y2;                        //Declaring as double so we can get value upto 5-6 decimals
    cout<<"Enter coordinates (x, y) of point 1: ";
    cin>>x1>>y1;
    cout<<"Enter coordinates (x, y) of point 2: ";
    cin>>x2>>y2;
    distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));         //Distance formula from coordinate geometry
    cout<<"The distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is :"<<distance;            //This may look confusing but if you look it after removing paranthesis you will understand it easily.
    return 0;
}