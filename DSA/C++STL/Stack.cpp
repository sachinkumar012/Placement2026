#include<bits/stdc++.h>
using namespace std;

// Stack that follow LIFO(Last In First Out)
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    st.emplace(5);
    cout<<st.top();  // now stack is 1,2,3,4,5 Last in first out so ans =5
    cout<<endl;
    st.pop();
    cout<<st.top();  // 5 pop out and at the top/last is 4 so ans=4
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    cout<<st.empty();   // false

    cout<<endl;
    cout<<endl;
    stack<int> st1;
    st1.push(20);
    st1.push(30);

    stack<int> st2;
    st2.push(100);
    st2.push(200);
    st1.swap(st2);
    // while(!st1.empty()){
    //     cout<<st1.top()<<" ";   // 200 100
    //     st1.pop();
    // }
    // cout<<endl;

    while(!st2.empty()){
        cout<<st2.top()<<" ";    // 30 20
        st2.pop();
    }
    cout<<endl;
}