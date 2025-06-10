#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for(char c:s){
            freq[c]++;
        }
        int maxOdd=INT_MIN;
        int minEven=INT_MAX;
        for(auto & entry:freq){
            int f=entry.second;
            if(f%2==1){
                maxOdd=max(maxOdd,f);
            }else{
                minEven=min(minEven,f);
            }
        }
        return maxOdd-minEven;
    }
};