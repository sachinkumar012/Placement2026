#include <bits/stdC++.h>
using namespace std; 

// int main() {
//     vector<int> nums ;
//     nums.push_back(6);
//     nums.emplace_back(8);
//     for (int n : nums) {
//         cout << n << " ";
//     }
//     return 0;
// }



// // Vector pairing

// int main(){
//     vector<pair<int, int>> v;
//     v.push_back({1,2});
//     for(pair<int, int> n: v){
//         cout<<n.first<<" "<<n.second;
//     }
// }


// int main(){
//     vector<pair<int,int>> nums;
//     nums.push_back({24,23});
//     nums.emplace_back(25,46);

//     for(pair<int,int> n: nums){
//         cout<<n.first<<" "<<n.second<<" ";
//     }
// }


// int main(){
//     // the size of vector=4, but not initliaze any data so all 4 are 0,0,0,0
//     vector<int> nums(4);
//     for(int n: nums){
//         cout<<n<<endl;
//     }
// }




// int main(){
//     // here size=4 and elements are 100 for times //100,100,100,100
//     vector<int> nums(4,100);
//     for(int n:nums){
//         cout<<n<<endl;
//     }
// }




// int main(){
//     vector<int> v1(5,20);
//     vector<int> v2(v1);
//     v1.push_back(47);
//     for(int n: v1){
//         cout<<n<<" ";
//     }
//     cout<<endl;
//     v2.push_back(65);
//     for(int m:v2){
//         cout<<m<<" ";
//     }
// }

// int main(){
//     vector<int> v={10,20,30,40,50};
//     vector<int>::iterator it=v.begin();
//     cout<<*(it)<<" ";  // 10
//     it++; // it=it+1;
//     cout<<*(it); // it gives the value
//     cout<<endl;
//     for(auto it:v){  // for each loop
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     it=it+2;
//     cout<<*(it);
//     cout<<endl;
//     cout<<v[0]<<" "<<v.at(0);
//     cout<<endl;
//     for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     for(auto it:v){
//         cout<<it<<" ";
//     }
//     v.erase(v.begin()+1);
// } 



// int main(){
//     vector<int> v={10,20,30,40,50};
//     v.erase(v.begin()+1);         // erase
//     for(auto n:v){
//         cout<<n<<" ";
//     }
//     cout<<endl;
//     vector<int> k={11,22,33,44,55};
//     k.erase(k.begin()+1, k.begin()+4);
//     for(auto m:k){
//         cout<<m<<" ";
//     }
//     cout<<endl;
//     vector<int> j(2,100);
//     j.insert(j.begin(),300);       // insert
//     j.insert(j.begin() +1,2,200);
//     for(auto l: j){
//         cout<<l<<" ";
//     }
// }



// int main(){
//     vector<int> v(2,100);
//     for(auto m:v){
//         cout<<m<<" ";
//     }

//     vector<int> j(2,200);
//     for(auto n:j){
//         cout<<n<<" ";
//     }
// }


// int main(){
//     vector<int> v(2,300); 
//     vector<int> copy(2,100);    // copy
//     v.insert(v.begin(),copy.begin(),copy.end());
//     for(int m:v){
//         cout<<m<<" ";
//     }
// }
// 


// int main(){
//     vector<int> v(2,20);
//     v.pop_back();
//     for(int n:v){
//         cout<<n<<" ";
//     }

//     vector<int> k={100,200};
//     k.pop_back();   // it will be pop from back ex 200
//     for(int m:k){
//         cout<<m<<" ";
//     }
//     cout<<endl;

//     vector<int> v1={10,20};
//     vector<int> v2={30,40};
//     v1.swap(v2);
//     for(int h:v1){
//         cout<<h<<" ";
//     }
//     cout<<endl;
//     for(int b:v2){
//         cout<<b<<" ";
//     }
// }

// 
// 
// 


// int main() {
//     vector<int> v1 = {10, 20};
//     vector<int> v2 = {30, 40};

//     // Print original vectors
//     cout << "Before swap:" << endl;
//     cout << "v1: ";
//     for (int x : v1) cout << x << " ";
//     cout << endl;

//     cout << "v2: ";
//     for (int x : v2) cout << x << " ";
//     cout << endl;

//     // Swap vectors
//     v1.swap(v2);

//     // Print swapped vectors
//     cout << "\nAfter swap:" << endl;
//     cout << "v1: ";
//     for (int x : v1) cout << x << " ";
//     cout << endl;

//     cout << "v2: ";
//     for (int x : v2) cout << x << " ";
//     cout << endl;

//     return 0;
// }

// 
// 

// 

// int main(){
//     vector<int> v={10,20};
//     v.clear();
//     cout<<v.empty();
// }


// int main(){
//     vector<int> v={1,2,3,4};
//     v.erase(find(v.begin(),v.end(),3));
//     for(int i:v){
//         cout<<i<<" ";
//     }
// }

// 

// int main(){
//     vector<int> v={1,3,5,7,9};
//     stack<int> s;
//     for(auto i:v){
//         s.push(i);
//         v.clear();
//     }

//     while(!s.empty()){
//         v.push_back(s.top());
//         s.pop();
//     }
//     for(auto i:v){
//         cout<<i<<" ";
//     }
// }



// int main(){
//     vector<int> v={13,235,346,2,23,4};
//     sort(v.begin(),v.end());
//     for(auto i: v){
//         cout<<i<<" ";
//     }
// }

int main(){
    vector<int> v={13,235,346,2,23,4};
    sort(v.begin(),v.end());
    int size=v.size();
    for(int i=size-1;i>=0;--i){
        cout<<v[i]<<" ";
    }
}