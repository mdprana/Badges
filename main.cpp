#include <iostream>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    // Input number from user
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        std::cout << "Factorial of negative numbers is not defined." << std::endl;
    } else {
        // Calculate factorial and display the result
        unsigned long long fact = factorial(number);
        std::cout << "Factorial of " << number << " = " << fact << std::endl;
    }

    return 0;
}
