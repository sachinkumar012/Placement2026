#include<bits/stdc++.h>
using namespace std;

// int main(){
//     priority_queue<int> pq;
//     // it stores in decreasing order
//     pq.push(10);
//     pq.push(4);
//     pq.push(6);
//     pq.emplace(5);
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";    // 10 6 5 4 (decreasing order)
//         pq.pop();
//     }
//     cout<<endl;
//     cout<<pq.top(); //10
//     pq.pop(); // delete 10
//     cout<<endl;
//     cout<<pq.top(); // after 10 6 is big so ans=6
// }





int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    // it stores the element in increasing order
    pq.push(10);
    pq.push(4);     
    pq.push(6);
    pq.emplace(5);
    while(!pq.empty()){
        cout<<pq.top()<<" ";    // 4 5 7 10 (Increasing order)
        pq.pop();
    }
    cout<<endl;
    cout<<pq.top();
}