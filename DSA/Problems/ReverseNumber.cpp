#include<bits/stdc++.h>
using namespace std;

// Reverse a number
/*
Ex: 1000=1, 1354=4531(revrse no)
*/
int main(){
    int n;
    cin>>n;  // 4531
    int rev=0;
    while(n>0){
        int lastNo=n%10;  //4531%10=1
        rev=(rev*10)+lastNo;  // (0*10)+1=1
        n=n/10;  
    }
    cout<<rev;
}