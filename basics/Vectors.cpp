#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    vector<int> numbers;
    int size, element, target;
    
    cout << "Enter the number of elements: ";
    cin >> size;
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> element;
        numbers.push_back(element);
    }
    
    cout << "Enter the element to search: ";
    cin >> target;
    
    int result = linearSearch(numbers, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the vector" << endl;
    }
    
    return 0;
}