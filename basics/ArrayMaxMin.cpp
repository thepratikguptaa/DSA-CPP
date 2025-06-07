#include <iostream>
using namespace std;

int getMax(int num[], int n) {
    int maxNum = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(num[i] > maxNum) {
            maxNum = num[i];
        }
        // or
        // maxNum = max(maxNum, num[i]);   //using inbuilt function
    }
    return maxNum;
}
int getMin(int num[], int n) {
    int minNum = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(num[i] < minNum) {
            minNum = num[i];
        }
        // or
        // minNum = min(minNum, num[i]);   //using inbuilt function
    }
    return minNum;
}

int main () {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int num[1000];  //better to give a number than use the variable 'size'.

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size) << endl;

}