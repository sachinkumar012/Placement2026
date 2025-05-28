#include<bits/stdc++.h>
using namespace std;

int printArray(int ans[], int n){
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int reverseArray(int arr[], int n){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1]=arr[i];
    }
    printArray(ans,n);
}

int main(){
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}