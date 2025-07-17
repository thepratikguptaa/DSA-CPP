class Solution {
public:
    int countPrimes(int n) {
        vector<int>v(n+1,1);
        int count = 0;
        for(long long i=2;i<n;i++){
            if(v[i]){
                count++;
                for(long long j = i*i;j<n;j+=i){
                    v[j] = 0;
                }
            }
        }
        return count;
    }
};






// Find Prime number using Sieve method

class Solution {
public:
    int countPrimes(int n) {
        
        int cnt = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++) {
            if(prime[i]) {
                cnt++;
                for(int j=2*i; j<n; j=j+i) {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};