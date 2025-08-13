class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};


// another approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //sort
        sort(nums.begin(), nums.end());
        int n = nums.size();

        //freq count
        int freq = 1, ans = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }
            else{
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2){
                return ans;
            }
        }
        return ans; // this line is not actually needed, but added for completeness
    }
};