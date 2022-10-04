#include<iostream>
using namespace std;
bool search(int arr[],int key,int n){

    for(int i=0;i<n;i++){

        //traversing through the array to find if the key is present 
        if(arr[i]==key){
            //if the key is found break from the loop and return true
            return true;
            break;
        }
        
    }
    //return false as key is not found in the array
    return false;
}
int main(){
    int arr[4]={1,2,3,4};
    int key;
    cin>>key;     //taking input of the number which is to be searched in the array
    if(search(arr,key,4)){
        //if the function returns true output found
        cout<<"Found"<<endl;
    }
    else{
        //key is not found as function returned false
        cout<<"Not found"<<endl;
    }
    return 0;
}