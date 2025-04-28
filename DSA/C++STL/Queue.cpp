#include<bits/stdc++.h>
using namespace std;

// Queue that follow FIFO(First In First Out)
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.emplace(30);
    q.push(40);
    q.push(50);

    q.back() +=5;
    // who ever go first that will pop first
    q.pop();
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    while(!q.empty()){
        cout<<q.back()<<" ";
        q.pop();
    }
}
