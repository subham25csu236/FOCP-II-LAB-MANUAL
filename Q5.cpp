#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter value of A : ";
    cin >> a;
    cout << "Enter value of B : ";
    cin >> b;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After swapping: A = " << a << " , B = " << b << endl;
    return 0;
}