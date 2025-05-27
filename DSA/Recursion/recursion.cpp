#include<bits/stdc++.h>
using namespace std;

// void printCount(int count){
//     if(count==4) return;
//     cout<<count<<endl;
//     printCount(count+1);
// }

// int main(){
//     printCount(0);
// }


// void printCount(int count){
//     if(count == 4) return;
//     cout << count << endl;
//     printCount(count + 1);
// }

// int main(){
//     printCount(0);
// }


void printNumber(){
    static int count=0;
    if(count==4) return;
    cout<<count<<endl;
    count++;
    printNumber();
}

int main(){
    printNumber();
}