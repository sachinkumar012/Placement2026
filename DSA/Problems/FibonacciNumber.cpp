#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num){
    if(num<=1){
        return num;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}