#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Create an unordered_map (hash table) to store key-value pairs
    unordered_map<string, int> ageMap;

    // Insert key-value pairs into the unordered_map
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap["Charlie"] = 22;

    // Access and print values using keys
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap["Bob"] << endl;

    // Check if a key exists in the unordered_map
    // Check if the key "David" exists in the unordered_map
    // If it does, then find() will return an iterator pointing to the key-value pair
    // If it doesn't, then find() will return the end() iterator
    if (ageMap.find("David") != ageMap.end()) { 
        cout << "David's age: " << ageMap["David"] << endl;
    } else {
        cout << "David is not in the age map." << endl;
    }

    // Iterate over the unordered_map and print all key-value pairs
    cout << "All entries in the age map:" << endl;
    for (const auto& pair : ageMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Remove an element from the unordered_map
    ageMap.erase("Charlie");

    // Print the size of the unordered_map
    cout << "The age map contains " << ageMap.size() << " entries after removing Charlie." << endl;

    return 0;
}

