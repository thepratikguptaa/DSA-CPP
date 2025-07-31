#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int res = 1;
        for(size_t i = 1; i < nums.size(); i++){
            if(nums[i] != nums[res - 1]){
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};

// main function to demonstrate the Solution class
int main() {
    Solution sol;
    vector<int> nums1 = {1, 1, 2};
    
    cout << "Original vector: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    int k1 = sol.removeDuplicates(nums1);

    cout << "New length: " << k1 << endl;
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl << endl;

    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    cout << "Original vector: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    int k2 = sol.removeDuplicates(nums2);

    cout << "New length: " << k2 << endl;
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}