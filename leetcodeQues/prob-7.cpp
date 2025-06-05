#include <climits>
class Solution {
public:
    int reverse(int x) {
        // Initialize result
        long long result = 0;
        
        // Process each digit
        while (x != 0) {
            // Extract the last digit
            int digit = x % 10;
            
            // Check for 32-bit integer overflow
            if (result > INT_MAX/10 || result < INT_MIN/10) {
                return 0;
            }
            // Add digit to result after shifting current result
            result = result * 10 + digit;
            

            
            // Remove the last digit from x
            x /= 10;
        }
        
        return (int)result;
    }
};
