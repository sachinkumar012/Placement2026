//3423. Maximum Difference Between Adjacent Elements in a Circular Array
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxAdjacentDiff(vector<int> & nums){
        int n=nums.size();
        int maxDiff=INT_MIN;

        for(int i=0;i<n;++i){
            int nextElem=(i+1)%n; // To find the next element
            int diff=abs(nums[i]-nums[nextElem]);  // absolute diff between the adjacent element
            maxDiff=max(maxDiff,diff);
        }
        return maxDiff;
    }
};

int main(){
    Solution sol;   // create an object of class Solution name sol
    vector<int> nums1={1,2,4};
    vector<int> nums2={-5,-10,-5,4};
    cout<<"Output of example 1: "<<sol.maxAdjacentDiff(nums1)<<endl;
    cout<<"Output of example 2: "<<sol.maxAdjacentDiff(nums2)<<endl;
    return 0;
}