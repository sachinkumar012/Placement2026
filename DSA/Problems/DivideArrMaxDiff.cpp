#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> result;

        for(int i=2;i<n;i+=3){
            if(nums[i]-nums[i-2]>k){
                return {};
            }else{
                result.push_back({nums[i-2],nums[i-1],nums[i]});
            }
        }
        return result;
    }
};

 