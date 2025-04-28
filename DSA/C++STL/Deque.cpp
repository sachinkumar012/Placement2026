#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.emplace_back(20);
    dq.push_front(220);
    dq.push_back(300);
    dq.emplace_front(600);
    for(int n:dq){
        cout<<n<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(int m:dq){
        cout<<m<<" ";
    }
    cout<<endl;
    dq.front();
    dq.back();
    for(int k:dq){
        cout<<k<<" ";
    }
}