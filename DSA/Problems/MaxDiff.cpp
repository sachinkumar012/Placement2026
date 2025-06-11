#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDifference(string s, int k) {
        int maxDiff = INT_MIN;
        unordered_set<char> chars(s.begin(), s.end());

        for (char a : chars) {
            for (char b : chars) {
                if (a == b) continue;
                int n = s.size();

                for (int i = 0; i <= n - k; i++) {
                    int countA = 0, countB = 0;
                    for (int j = i; j < n; j++) {
                        if (s[j] == a) countA++;
                        if (s[j] == b) countB++;

                        if (j - i + 1 >= k) {
                            if (countA % 2 == 1 && countB % 2 == 0 && countB > 0) {
                                maxDiff = max(maxDiff, countA - countB);
                            }
                        }
                    }
                }
            }
        }

        return (maxDiff == INT_MIN) ? -1 : maxDiff;
    }
};

// -------------------- MAIN FUNCTION --------------------

int main() {
    Solution sol;

    string s = "1122211";
    int k = 3;

    int result = sol.maxDifference(s, k);

    cout << "Maximum Difference: " << result << endl;

    return 0;
}
