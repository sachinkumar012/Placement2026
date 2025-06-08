#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> result;
    int N;

    void dfs(int curr) {
        if (curr > N) return;
        result.push_back(curr);
        for (int i = 0; i <= 9; ++i) {
            if (curr * 10 + i > N) break;
            dfs(curr * 10 + i);
        }
    }

    vector<int> lexicalOrder(int n) {
        N = n;
        for (int i = 1; i <= 9; ++i) {
            if (i > n) break;
            dfs(i);
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution sol;
    vector<int> output = sol.lexicalOrder(n);

    cout << "Lexicographical Order:\n";
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}
