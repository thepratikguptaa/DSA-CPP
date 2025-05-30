#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i=1; // Initialize the row counter
    while (i<=n) {
        int j=1;
        while(j<=n) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

}