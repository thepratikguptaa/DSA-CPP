class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while (n!=0) {

            int digit= n % 10; // Get the last digit
            product *= digit; // Multiply the digit to product
            sum += digit; // Add the digit to sum
            n /= 10; // Remove the last digit
        }
        int result = product - sum; // Calculate the difference
        return result; // Return the result
    }
};