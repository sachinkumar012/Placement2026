#include<bits/stdc++.h>
using namespace std;

/* Using Normal Technique */

// int main(){
//     int arr[]={1,2,3,4,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     int key=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             count++;
//         }
//     }
//     cout<<"Occurinng of "<<key<<" in array is: "<<count;
//  }


/* Using Hashing (Unordered map) */

int main(){
    int arr[]={1,2,3,1,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter key to find the occurance: ";
    cin>>key;
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    cout<<"frequency of "<<key<<" is: "<<freq[key];
    return 0;
}