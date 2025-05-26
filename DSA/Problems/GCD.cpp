#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    int result=1;
    int minVal=(n<m)? n: m;
    for(int i=1;i<=minVal;i++){
        if(n%i==0 && m%i==0){
            result=i;
        }
    }
    return result;
}

int main(){
    int a,b;
    cout<<"Enter number: ";
    cin>>a>>b;
    cout<<"Gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}