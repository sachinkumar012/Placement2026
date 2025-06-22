#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<string> divideString(string s, int k, char fill){
        vector<string> result;
        int n=s.size();
        for(int i=0;i<n;i+=k){   // i+=k (because formation of 1 group upto k element)
            string group=s.substr(i,k); // making group 
            if(group.size()<k){
                group +=string(k-group.size(),fill); // if group.size<k the remaining element fill with x
            }
            result.push_back(group);
        }
        return result;
    }
};

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s; 
    // example= "abcdefghi", "abcdefghij"
    // result1= "abc", "def", "ghi"
    // result2= "abc", "def", "ghi", "jxx" -- here reamaining element fill with 'x';
    int k=3;
    char fill='x';
    Solution sol;
    vector<string> output=sol.divideString(s,k,fill);
    cout<<"Output Groups are: ";
    for(const string& group:output){
        cout<<"\""<<group<<"\"";
    }
    cout<<endl;
    return 0;

}
