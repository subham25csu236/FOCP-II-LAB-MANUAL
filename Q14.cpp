/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
The program should continue executing based on the user's choice and display the result of each operation.*/
#include <iostream>
using namespace std;

class Calculator {
public:
    double num1, num2;

    void inputNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Result: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Result: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Result: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
    }
};

int main() {
    Calculator calc;
    int choice;

    do {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            calc.inputNumbers(); // Take input for operation
        }

        switch (choice) {
            case 1: calc.add(); break;
            case 2: calc.subtract(); break;
            case 3: calc.multiply(); break;
            case 4: calc.divide(); break;
            case 5: cout << "Exiting calculator. Goodbye!" << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}