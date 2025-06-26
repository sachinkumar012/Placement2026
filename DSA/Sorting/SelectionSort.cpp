#include<bits/stdc++.h>
using namespace std;

int Selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    int n;
    cout<<"enter number of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    cout<<"Sorted element are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time complexity: o(n^2)