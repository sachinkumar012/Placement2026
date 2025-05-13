#include<bits/stdc++.h>
using namespace std;

// The sum of cube of a number is equal to original number=Armstrong number

int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(sum==original) cout<<"Armstrong Number";
    else cout<<"Not Armstrong Number";
}