// question : You are given an array of elements containing 0 and 1 in unsorted form. You have to sort all 0's to left side of array and all 1's to the right side of array

#include<iostream>   // TC: O(n)
using namespace std;

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[],int n){
    int left=0, right= n-1; // taking left and right as two pointers

    while(left<right){

        while(arr[left]==0 && left<right){ // till the left side of array contains 0 and left < right, no issues, just increment left pointer
            left++;
        }
        while(arr[right]==1 && left<right){ // till the right side of array contains 0 and left < right, no issues, just decrement right pointer
            right--;
        }

        // if control flow of program comes to this section then it means arr[left]=1, arr[right]=0
        if(left<right){

            swap(arr[left],arr[right]);
            left++;
            right--;

        }
    }
}

int main(){

    int arr[8]={1,0,0,1,0,0,1,0};
    sortOne(arr,8); // for sorting the array
    printArray(arr,8); // for printing the array after sorting ie. sorted array
}
