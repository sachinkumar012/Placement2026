#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }

}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n<1){
        cout<<"Please enter positive number: "<<endl;
    }else{
    cout<<"Sum of n natural number is: "<<sum(n);
    }
}