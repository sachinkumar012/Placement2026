#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string maxStr = s, minStr = s;

        // Get max value by replacing first non-'9' digit with '9'
        for (char c : s) {
            if (c != '9') {
                char target = c;
                for (char &ch : maxStr) {
                    if (ch == target) ch = '9';
                }
                break;
            }
        }

        // Get min value by replacing first non-'0' digit with '0'
        for (char c : s) {
            if (c != '0') {
                char target = c;
                for (char &ch : minStr) {
                    if (ch == target) ch = '0';
                }
                break;
            }
        }

        return stoi(maxStr) - stoi(minStr);
    }
};

int main() {
    Solution sol;
    
    int num1 = 11891;
    int result1 = sol.minMaxDifference(num1);
    cout << "Input: " << num1 << ", Output: " << result1 << endl;

    int num2 = 90;
    int result2 = sol.minMaxDifference(num2);
    cout << "Input: " << num2 << ", Output: " << result2 << endl;

    return 0;
}
