#include <iostream>
using namespace std;

int main() {

    int a=4, b=6;

    cout << "a & b = " << (a & b) << endl; // Bitwise AND
    cout << "a | b = " << (a | b) << endl; // Bitwise OR
    cout << "~a = " << (~a) << endl; // Bitwise NOT
    cout << "a ^ b = " << (a ^ b) << endl; // Bitwise XOR

    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

}