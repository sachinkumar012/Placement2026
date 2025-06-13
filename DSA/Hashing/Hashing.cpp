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

// int main(){
//     int arr[]={1,2,3,1,2,3,4,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int key;
//     cout<<"Enter key to find the occurance: ";
//     cin>>key;
//     unordered_map<int,int> freq;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     cout<<"frequency of "<<key<<" is: "<<freq[key];
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int hash[12]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] +=1;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;
// }




/*
1. Range inside main function for integer : 10^6 / 1e6
2. Range outside main funtion for integer : 10^7 / 1e7

3. Range inside main function for boolean : 10^7 / 1e7
4. Range outside main function for boolean : 10^8 / 1e8

*/
 

// int main() {
//     string s = "hello world";
//     unordered_map<char, int> freq;

//     // Count character frequency using hashing
//     for (char c : s) {
//         if (c != ' ') // skip spaces
//             freq[c]++;
//     }

//     // Print frequencies
//     for (auto pair : freq) {
//         cout << pair.first << " => " << pair.second << endl;
//     }

//     return 0;
// }


/*
Hashing has minimum time complexity than other in (searchin, inserting, deleting)
In other the time complexity is like o(n)
but by using this hashing method we can do all the in o(1) time
Normal way to find num%10=? is the index no where the element found at that index
load factor=no of element/size of table
To remove this collison
1. Linear Probing: H(k)=(k+i)%10
2. Quadratic Probing: H(k)=(k+i^2)%10
3. Double Hashing: (H^1(k)+i*H^2(k)) %10
4. (H^1(k)=k%5    i*H^2(k))=k%6
*/

