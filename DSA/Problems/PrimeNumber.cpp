#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n%2!=0){
//         cout<<"Prime number";
//     }else{
//         cout<<"Not a prime number";
//     }
// }


// for higher level

bool isPrime(int num){
    if(num<=1) return false;
    if(num==2) return true;
    if(num%2==0) return false;

    for(int i=3;i*i<=num;i=i+2){
        if(num%i==0){
            return false;
        }else{
            return true;
        }
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime number";
    }else{
        cout<<"Not prime number";
    }
}