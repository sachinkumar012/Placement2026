#include<bits/StdC++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     int dup=n;
//     while(n!=0){
//         int ld=n%10;
//         rev=(rev*10)+ld;
//         n/=10;
//     }
//     if(rev==dup) cout<<"Palindrome Number";
//     else cout<<"Not a Palindrome Number";
// }


// Leetocde 
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0) return false;
//         int dup=x;
//         int rev=0;
//         while(x!=0){
//             long ld=x%10;
//             if (rev > (INT_MAX - ld) / 10) return false;
//             rev=(rev*10)+ld;

//             x=x/10;
//          }
//       return rev==dup;
//      }
// };


int main(){
    int n;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n!=0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    if(rev==dup) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}