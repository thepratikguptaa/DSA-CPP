#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;  //It uses an unordered map freq to count the frequency of each number in the vector.
        
        // Count frequency of each number
        for (int num : nums) {  //The loop for (int num : nums) iterates through each number in the vector and increments its count in the map.
            freq[num]++;
        }
        
        int sum = 0;
        // Sum numbers that appear exactly once
        for (auto& [num, count] : freq) {  //auto& [num, count]: This is a structured binding declaration introduced in C++17. It allows you to unpack the key-value pairs directly into two variables, num and count || : freq: This specifies that the loop should iterate over the freq unordered map.
            if (count == 1) {
                sum += num;
            }
        }
        
        return sum;
    }
};