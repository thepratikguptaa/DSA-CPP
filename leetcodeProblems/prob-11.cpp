// Brute Force (with TLE)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;

//         for(int i=0; i<height.size(); i++){
//             for(int j=i+1; j<height.size(); j++){
//                 int water = (j-i) * min(height[i], height[j]);
//                 maxWater = max(maxWater, water);
//             }
//         }
//         return maxWater;
//     }
// };





// Optimized Solution
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp=0, rp=height.size()-1;

        while(lp < rp){
            int w = rp-lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w*ht;
            maxWater = max(maxWater, currWater);

            height[lp] > height[rp] ? rp-- : lp++;
        }
        return maxWater;
    }
};