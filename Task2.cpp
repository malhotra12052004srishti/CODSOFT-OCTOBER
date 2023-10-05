#include <iostream>

int main() {
    char operation;
    double num1, num2;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cout << "Invalid operation. Please enter +, -, *, or /." << std::endl;
            return 1; // Exit with an error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
