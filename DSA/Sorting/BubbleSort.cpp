#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter no of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubble_sort(arr,n);
    cout<<"Bubble sort are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}