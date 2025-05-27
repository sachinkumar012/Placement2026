#include<bits/stdc++.h>
using namespace std;

// void printNumber(int n){
//     if(n>10) return;
//     cout<<n<<endl;
//     printNumber(n+1);
// }

// int main(){
//     printNumber(1);
//     return 0;
// }


void printNumber(int n){
    if(n>10) return;
    cout<<n<<" ";
    printNumber(n+1);
}

int main(){
    printNumber(1);
    return 0;
}