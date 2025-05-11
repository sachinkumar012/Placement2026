#include<bits/stdc++.h>
using namespace std;

// Reverse a number
/*
Ex: 1000=1, 1354=4531(revrse no)
*/
// int main(){
//     int n;
//     cin>>n;  // 4531
//     int rev=0;
//     while(n>0){
//         int lastNo=n%10;  //4531%10=1
//         rev=(rev*10)+lastNo;  // (0*10)+1=1
//         n=n/10;  
//     }
//     cout<<rev;
// }



//* Leetcode problem no 7
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x !=0){
            int ld=x%10;
            x=x/10;
             
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8)) return 0;
            rev=(rev*10)+ld;
        }
            return rev;
     }
  
};