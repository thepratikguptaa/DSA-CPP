#include <iostream>

void findDuplicates(int nums[], int size, int result[], int& returnSize) {
    // Maximum possible duplicates is size/2
    returnSize = 0;
    
    for (int i = 0; i < size; i++) {
        int index = (nums[i] > 0 ? nums[i] : -nums[i]) - 1;
        if (nums[index] < 0) {
            result[(*returnSize)++] = index + 1;
        } else {
            nums[index] = -nums[index];
        }
    }
    
    // Restore the original array values (optional)
    for (int i = 0; i < size; i++) {
        nums[i] = nums[i] < 0 ? -nums[i] : nums[i];
    }
    
    // No need to return result as it's passed by reference
}