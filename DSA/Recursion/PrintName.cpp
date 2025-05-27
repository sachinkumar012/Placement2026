#include<bits/stdc++.h>
using namespace std;

void printName(int count){
    if(count==5) return;
    cout<<"Sachin Kumar "<<endl;
    printName(count+1);
}

int main(){
    printName(0);
    return 0;
}