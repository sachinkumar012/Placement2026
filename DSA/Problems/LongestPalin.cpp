#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int res = 0;  // To store the total length of the palindrome
        vector<string> symm;  // To track symmetric words like "gg", "cc"
        unordered_map<string, int> m;  // To count occurrences of each word

        for (auto w : words) {
            string rev = w;
            reverse(rev.begin(), rev.end());

            if (m[rev]) {
                // Found a reverse word that can pair with current word
                m[rev]--;
                res += 4;  // Each pair contributes 4 to the length
            } else {
                m[w]++;  // No reverse match yet, store the word

                if (rev == w) {
                    // If the word is symmetric (same as its reverse), keep track
                    symm.push_back(w);
                }
            }
        }

        // Try to place one unpaired symmetric word (like "gg") in the center
        for (auto e : symm) {
            if (m[e]) {
                return res + 2;  // Add one more word of length 2
            }
        }

        return res;  // Final result
    }
};

int main() {
    Solution sol;

    // Example input
    vector<string> words = {"ab", "ba", "cc", "cc", "gg", "gg"};

    int result = sol.longestPalindrome(words);

    cout << "Length of longest palindrome: " << result << endl;

    return 0;
}
