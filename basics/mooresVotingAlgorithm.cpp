#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    // Function to find majority element (element appearing more than n/2 times)
    // Uses Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        // freq keeps track of frequency count
        // ans stores current candidate for majority element
        // n stores size of input array
        int freq = 0, ans = 0, n = nums.size();
        
        // Iterate through array
        for(int i=0; i<n; i++){
            // If frequency becomes 0, pick current element as new candidate
            if(freq == 0) ans = nums[i];
            
            // Increment frequency if current element matches candidate
            // Decrement frequency if it doesn't match
            if(nums[i] == ans) freq ++;
            else freq --;
        }
        
        // Return the majority element
        return ans;
    }
};

int main() {
    Solution solution;
    // Test case with array containing majority element 2
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority Element: " << solution.majorityElement(nums) << endl;
    return 0;
}