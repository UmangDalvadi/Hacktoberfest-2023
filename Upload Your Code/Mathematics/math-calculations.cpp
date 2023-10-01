#include <iostream>
#include <iomanip>

using namespace std;

// addition function
double add(double a, double b) {
    return a + b;
}

// subtraction function
double subtract(double a, double b) {
    return a - b;
}

// multiplication function
double multiply(double a, double b) {
    return a * b;
}

// division function
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0.0; // For division by zero
    } else {
        return a / b;
    }
}

// Factorial function
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    char choice;

    do {
        cout << "Choose an operation:" << endl;
        cout << "1. Factorial Calculation" << endl;
        cout << "2. Basic Arithmetic Operations" << endl;

        cin >> choice;

        if (choice == '1') {
            // Factorial Calculation
            unsigned int num;

            cout << "Enter a non-negative integer: ";
            cin >> num;

            unsigned long long result;

            if (num >= 0) {
                result = factorial(num);
                cout << "Factorial of " << num << " is " << result << endl;
            } else {
                cout << "Please enter a non-negative integer." << endl;
            }
        } else if (choice == '2') {
            // Basic Arithmetic Operations
            double num1, num2;
            char operation;

            do {
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                cout << "Enter an operation (+, -, *, /): ";
                cin >> operation;

                double result;

                switch (operation) {
                    case '+':
                        result = add(num1, num2);
                        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                        break;
                    case '-':
                        result = subtract(num1, num2);
                        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                        break;
                    case '*':
                        result = multiply(num1, num2);
                        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                        break;
                    case '/':
                        result = divide(num1, num2);
                        if (result != 0.0) {
                            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                        }
                        break;
                    default:
                        cout << "Invalid operation. Please enter +, -, *, or /." << endl;
                        break;
                }

                cout << "Do you want to continue with more arithmetic operations? (y/n): ";
                cin >> choice;

            } while (choice == 'y' || choice == 'Y');
        } else {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
        
    } while (choice == '1' || choice == '2');

    return 0;
}