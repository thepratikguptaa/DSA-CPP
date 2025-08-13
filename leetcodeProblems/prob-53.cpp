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