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


    // int n;
    // cout << "Enter a number: " << endl;
    // cin >> n;

    // cout << "Printing count from 1 to " << n << endl;
    // for (int i=0; i<n; i++) {
    //     cout << i+1 << " ";
    // }


    // int a=0, b=1;       //fibonacci series
    // int n=10; // number of terms in the series
    // for (int i=1; i<=n; i++) {
    //     cout << a << " ";
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }


    // prime number check
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    bool isPrime = true;

    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == 0) {
        cout << "The given number is not prime" << endl;
    } else {
        cout << "The given number is prime" << endl;
    }
}