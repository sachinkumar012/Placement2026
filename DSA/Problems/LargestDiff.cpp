#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minSoFar = nums[0];
        int maxDiff = -1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > minSoFar) {
                maxDiff = max(maxDiff, nums[i] - minSoFar);
            } else {
                minSoFar = nums[i];
            }
        }

        return maxDiff;
    }
};

int main() {
    Solution sol;

    // Example test cases
    vector<int> nums1 = {7, 1, 5, 4};
    vector<int> nums2 = {9, 4, 3, 2};
    vector<int> nums3 = {1, 5, 2, 10};

    cout << "Test Case 1: " << sol.maximumDifference(nums1) << endl; // Output: 4
    cout << "Test Case 2: " << sol.maximumDifference(nums2) << endl; // Output: -1
    cout << "Test Case 3: " << sol.maximumDifference(nums3) << endl; // Output: 9

    return 0;
}
