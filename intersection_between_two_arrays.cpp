#include<bits/stdc++.h>
using namespace std;
int N=1e5;
vector<int> intersection_between_two_arrays(int A[],int B[],int n,int m)
{
    //2-pointer method
    sort(A,A+n);
    sort(B,B+m);

    vector<int> v;

    int i=0,j=0;//initially both of the pointers are at the first element of both the arrays

    while(i<n&&j<m)//run the loop while either of them has reached the edn
    {
        if(A[i]==B[j])//equal means its a common element so we push it into our result vector and move both pointers one step ahead
        {
            v.push_back(A[i]);
            i++;j++;
        }
        else if(A[i]<B[j])//as the current element in the array A is less than that of B so we move its pointer one
            i++;         //step ahead so as to get en element which can be potentially equal to that of B
        else
            j++;    //here B has the smaller element so its pointer is moved ahead one step
    }
    return v;
}
int main()
{
    int A[N],B[N];
    int n,m;//sizes for the two arrays
    cout<<"Enter the sizes of the two arrays: ";
    cin>>n>>m;

    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n;i++)
        cin>>A[i];

    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<m;i++)
        cin>>B[i];

    vector<int> ans=intersection_between_two_arrays(A,B,n,m);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
