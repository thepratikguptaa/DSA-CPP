class Solution {
public:
    int gcd(int a,int b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        while(a!=b){
            if(a<b){
                b=b-a;
            }
            else{
                a=a-b;
            }
        }
        return b;
    }
     
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=1000;
        for(int i=0;i<n;i++){
            a=max(a,nums[i]);
            b=min(b,nums[i]);
        }
        return gcd(a,b);
    }
};