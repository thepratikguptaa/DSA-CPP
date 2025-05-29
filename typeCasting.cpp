#include <iostream>
using namespace std;
int main() {

    int a = 'a'; // Implicit conversion from char to int
    cout << "Implicit conversion from char to int: " << a << endl;

    char ch = 98;
    cout << "Implicit conversion from int to char: " << ch << endl;

    char ch2 = 123456;
    cout << "Implicit conversion from int to char (out of range): " << ch2 << endl;
}