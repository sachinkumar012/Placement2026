#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> freqMap;
        for (char c : word) freqMap[c]++; ,

        vector<int> freqs;
        for (auto &[ch, f] : freqMap) freqs.push_back(f);

        sort(freqs.begin(), freqs.end());

        int minDel = INT_MAX;
        int n = freqs.size();

        for (int i = 0; i < n; ++i) {
            int f = freqs[i];  // current target minimum frequency
            int del = 0;

            for (int j = 0; j < n; ++j) {
                if (freqs[j] < f) {
                    // delete all
                    del += freqs[j];
                } else if (freqs[j] > f + k) {
                    // delete extras
                    del += freqs[j] - (f + k);
                }
            }

            minDel = min(minDel, del);
        }

        return minDel;
    }
};
