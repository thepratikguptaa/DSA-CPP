#include <iostream>
using namespace std;
int main() {

    int a = 'a'; // Implicit conversion from char to int
    cout << "Implicit conversion from char to int: " << a << endl;

    char ch = 98;
    cout << "Implicit conversion from int to char: " << ch << endl;

    char ch2 = 123456;
    cout << "Implicit conversion from int to char (out of range): " << ch2 << endl;

    float f = 3.14;
    int c = int(f); // Explicit conversion from float to int
    cout << "Explicit conversion from float to int: " << c << endl;
    
}