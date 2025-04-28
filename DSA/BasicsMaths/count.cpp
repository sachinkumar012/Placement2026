#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int num=7789;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<count;
}