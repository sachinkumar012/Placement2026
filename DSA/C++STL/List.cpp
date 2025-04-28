#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(30);
    ls.push_back(50);
    for(int m:ls){
        cout<<m<<" ";
    }
}