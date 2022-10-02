#include<bits/stdc++.h>
using namespace std;

int main(){
    // declare an array
    int arr[] = {2, 5, 1, 5, 3, 5, 6, 5, 5, 1, 5, 5};
    // size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // find the majority element
    int maj_index = 0, count = 1;
    for(int i = 1; i < n; i++){
        if(arr[maj_index] == arr[i])
            count++;
        else
            count--;
        if(count == 0){
            maj_index = i;
            count = 1;
        }
    }

    // check if the candidate is majority element
    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[maj_index])
            count++;
    }

    // print the majority element
    if(count > n/2)
        cout << arr[maj_index] << endl;
    else
        cout << "No majority element" << endl;
    return 0;

}