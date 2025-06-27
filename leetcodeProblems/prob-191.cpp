class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n!=0) {
            // checking last bit
            if (n&1) {
                count++; // Increment count if last bit is 1
            }
            // removing last bit
            n = n>>1;
            if (n==0) {
                break;
            }
        }
        return count; // Return the count of 1 bits
    }
};