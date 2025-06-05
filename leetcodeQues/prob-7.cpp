#include <iostream>

using namespace std;

/*
LeetCode Problem 7: Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
*/

class Solution {
public:
    int reverse(int x) {
        // Initialize result
        long long result = 0;
        
        // Process each digit
        while (x != 0) {
            // Extract the last digit
            int digit = x % 10;
            
            // Add digit to result after shifting current result
            result = result * 10 + digit;
            
            // Check for 32-bit integer overflow
            if (result > 2147483647 || result < -2147483648) {
                return 0;
            }
            
            // Remove the last digit from x
            x /= 10;
        }
        
        return (int)result;
    }
};

// Test function
int main() {
    Solution solution;
    
    // Test cases
    cout << "Test Case 1: 123 -> " << solution.reverse(123) << endl;      // Expected: 321
    cout << "Test Case 2: -123 -> " << solution.reverse(-123) << endl;    // Expected: -321
    cout << "Test Case 3: 120 -> " << solution.reverse(120) << endl;      // Expected: 21
    cout << "Test Case 4: 0 -> " << solution.reverse(0) << endl;          // Expected: 0
    cout << "Test Case 5: 1534236469 -> " << solution.reverse(1534236469) << endl; // Expected: 0 (overflow)
    
    return 0;
}