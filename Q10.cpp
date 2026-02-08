#include <iostream>
using namespace std;

class Calendar {
public:
    int year;

    void inputYear() {
        cout << "Enter a year: ";
        cin >> year;
    }

    bool isLeapYear() {
        // Leap year rules:
        // 1. Divisible by 4 AND (not divisible by 100 OR divisible by 400)
        if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
            return true;
        else
            return false;
    }

    void displayResult() {
        if (isLeapYear())
            cout << year << " is a Leap Year. February has 29 days." << endl;
        else
            cout << year << " is NOT a Leap Year. February has 28 days." << endl;
    }
};

int main() {
    Calendar cal;
    cal.inputYear();
    cal.displayResult();

    return 0;
}