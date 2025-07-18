#include <iostream>
#include <vector>

// Find Prime number using Sieve method

class Solution {
public:
    int countPrimes(int n) {
        
        int cnt = 0;
        std::vector<bool> prime(n+1, true);

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

int main() {
    Solution s;
    int n;
    std::cout << "Enter a number to find primes smaller than it: ";
    std::cin >> n;
    std::cout << "Number of primes less than " << n << " is " << s.countPrimes(n) << std::endl;
    return 0;
}
