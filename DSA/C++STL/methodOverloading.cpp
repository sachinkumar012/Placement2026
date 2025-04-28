#include<bits/stdc++.h>
using namespace std;

// int add(int a, int b){
//     return a+b;
// }

// double add(int x, int y, int z){
//     return x+y+z;
// }

// int main(){
//     cout<<add(10,20)<<endl;
//     cout<<add(10.2,30.4,46.6);
// }


// int recursiveSearch(int arr[], int l, int r, int x){
//     if(r<l) return false;
//     if(arr[l]==x) return true;
//     if(arr[r]==x) return true;
//     return recursiveSearch(arr,l+1, r-1, x);
// }

// int main(){

// }


bool isPalindrome(const string& str, int start, int end){
    if(start==end) return true;
    if(str[start]!=str[end]) return false;
    if(start<end){
        return isPalindrome(str, start+1, end-1);
        return true;
    }
}
int main() {
    string word = "malayalam";

    if (isPalindrome(word, 0, word.length() - 1))
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}