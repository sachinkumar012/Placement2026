#include<bits/stdc++.h>
using namespace std;

// Reverse a number
/*
Ex: 1000=1, 1354=4531(revrse no)
*/
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n>0){
        int lastNo=n%10;
        rev=(rev*10)+lastNo;
        n=n/10;
    }
    cout<<rev;
}