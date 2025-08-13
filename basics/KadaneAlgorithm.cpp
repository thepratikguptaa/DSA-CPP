#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for (int num : nums) {
            currSum += num;
            maxSum = max(maxSum, currSum);
            if (currSum < 0) {
                currSum = 0; // Reset current sum if it drops below zero
            }
        }
        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = solution.maxSubArray(nums);
    return 0;
}