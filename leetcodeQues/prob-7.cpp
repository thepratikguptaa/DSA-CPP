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
