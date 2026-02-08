//  A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a 
// number and check whether it is prime. 
#include <iostream>
#include <cmath>   // For sqrt()
using namespace std;

class PrimeChecker {
public:
    int number;

    void inputNumber() {
        cout << "Enter a number to check for primality: ";
        cin >> number;
    }

    bool isPrime() {
        if (number <= 1)
            return false;
        if (number == 2)
            return true;

        int limit = sqrt(number);
        for (int i = 2; i <= limit; i++) {
            if (number % i == 0)
                return false;
        }
        return true;
    }

    void displayResult() {
        if (isPrime())
            cout << number << " is a Prime Number." << endl;
        else
            cout << number << " is NOT a Prime Number." << endl;
    }
};

int main() {
    PrimeChecker checker;
    checker.inputNumber();
    checker.displayResult();

    return 0;
}