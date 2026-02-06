#include <iostream>
using namespace std;

class swapnum {
public:
    int a, b;

    void getdata() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void swapvalues() {
        a = a + b;
        b = a - b;
        a = a - b;

        cout << "After swapping:\n";
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    swapnum s1;
    s1.getdata();
    s1.swapvalues();
    return 0;
}