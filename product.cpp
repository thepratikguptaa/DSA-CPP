#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace

int main() {
    // Declare variables to store the two numbers entered by the user
    double num1, num2;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1; // Read the first number from user input

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2; // Read the second number from user input

    // Calculate the product of the two numbers
    double product = num1 * num2;

    // Display the result to the user
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;

    int size = sizeof(product); // Calculate the size of the product variable
    // Display the size of the product variable
    cout << "The size of the product is " << size << " bytes." << endl;

    // Indicate that the program ended successfully
    return 0;
}
