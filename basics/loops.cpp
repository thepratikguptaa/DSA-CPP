#include <iostream>
using namespace std;

int main() {

    // int a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // if (a>b) {
    //     cout << "the first number is greater than the second number" << endl;
    // } else if (a < b) {
    //     cout << "the second number is greater than the first number" << endl;
    // } else {
    //     cout << "Both numbers are equal" << endl;
    // }







    // char a;
    // cout << "Give me a character: ";
    // cin >> a;
    // cout << "Cool! I got a character now!" << endl;
    // if (a >= 'a' && a <= 'z') {
    //     cout << "The given character is a lowercase alphabet letter" << endl;
    // } else if (a >= 'A' && a <= 'Z') {
    //     cout << "The given character is an uppercase alphabet letter" << endl;
    // } else if (a>= '0' && a <= '9') {
    //     cout << "The given character is a digit" << endl;
    // } else {
    //     cout << "The given character is a special character" << endl;
    // }







    // int n, i = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (i <= n) {
    //     cout << i << " ";
    //     i++;
    // }

    // int n, i = 1, sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (i <= n) {
    //     sum += i;
    //     i++;
    // }
    // cout << "sum of first " << n << " natural numbers is " << sum << endl;

    
    // int n, i=2;
    // cout << "Enter the number to check for prime: ";
    // cin >> n;
    // while (i < n) {
    //     if (n % i == 0) {
    //         cout << n << " is not a prime number" << endl;
    //         return 0; // Exit the program if a divisor is found
    //     } else {
    //         cout << n << " is a prime number" << endl;
    //         return 0; // Exit the program if no divisor is found
    //     }
    //     i++;
    // }


    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "Printing count from 1 to " << n << endl;
    for (int i=0; i<n; i++) {
        cout << i+1 << " ";
    }

}