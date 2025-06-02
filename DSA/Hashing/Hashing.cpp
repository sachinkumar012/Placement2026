#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int key=1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<"Occurinng of "<<key<<" in array is: "<<count;
 }