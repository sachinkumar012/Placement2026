#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        string a = s, b = s;

        for (char &ch : a) {
            if (ch != '9') {
                char target = ch;
                for (char &c2 : a)
                    if (c2 == target) c2 = '9';
                break;
            }
        }

        if (b[0] != '1') {
            char target = b[0];
            for (char &c2 : b)
                if (c2 == target) c2 = '1';
        } else {
            for (int i = 1; i < b.size(); ++i) {
                if (b[i] != '0' && b[i] != '1') {
                    char target = b[i];
                    for (char &c2 : b)
                        if (c2 == target) c2 = '0';
                    break;
                }
            }
        }

        return stoi(a) - stoi(b);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    if (!(cin >> num)) {
        cerr << "Error: failed to read integer input\n";
        return EXIT_FAILURE;
    }

    Solution sol;
    cout << sol.maxDiff(num) << "\n";
    return 0;
}
