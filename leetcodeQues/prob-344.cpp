#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s1 = {'h','e','l','l','o'};
    
    reverseString(s1);
    
    for (char c : s1) {
        cout << c << " ";
    }
    cout << endl;
    
    vector<char> s2 = {'H','a','n','n','a','h'};
    
    reverseString(s2);
    
    for (char c : s2) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}