#include<iostream>
#include<vector>
#include<set>

using namespace std;

//function to find intersection of elements between two vectors/arrays
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
       
        set<int> s;
       
        for(int i=0; i<nums1.size(); i++) {
            s.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++) {
            if(s.find(nums2[i]) != s.end()) // if found intersection
            { 
            v.push_back(nums2[i]); // storing the common/intersection elements into a vector
            s.erase(nums2[i]); // so that further similar elements do'nt match and we return a unique solution
            }
        }
        return v;
        
    }
    
    int main()
    {
        vector<int> nums1 = {1,3,3,5,7,11};
        vector<int> nums2 = {3,5,11,2};
        vector<int> ans;
        
        ans=intersection(nums1,nums2);
        
        cout<<"The intersecting elements are:";
        
        for(int i = 0; i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    }
