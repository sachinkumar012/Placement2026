#include<bits/stdC++.h> // it includes all library function
using namespace std;

// void explainPair(){
//     pair<int, int> p={1,3};
//     cout<<p.first<<" "<<p.second<<endl;
// }
// int main(){
//     explainPair();
//     return 0;
// }



// void explainPair(){
//     pair<int,pair<int,int>> p={1,{3,4}};  // nested pair
//     cout<<p.first<<endl;  //1;
//     cout<<p.second.first<<endl; //3
//     cout<<p.second.second<<endl; //4
// }
// int main(){
//     explainPair();
//     return 0;
// }



void explainPair(){
   pair<int,int> arr[]={{1,2},{2,5},{5,1}};
   cout<<arr[0].first<<endl;  // 1
   cout<<arr[1].second<<endl; // 5
   cout<<arr[2].first<<endl;  // 5
}
int main(){
    explainPair();
    return 0;
}