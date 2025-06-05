#include <iostream>
#include <math.h>
using namespace std;

int main() {  // decimal to binary conversion

    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    int ans = 0;
    int i = 0; // To keep track of the position of the digit

    while (n!=0) {
        int bit = n & 1; // Get the last digit

        ans = (bit * pow(10, i)) + ans; // Add the digit at the correct position

        n = n >> 1;  // or n /= 2; // Shift the number to the right
        i++; // Move to the next position
    }

    cout << "Answer: " << ans << endl;

}