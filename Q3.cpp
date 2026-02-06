#include <iostream>
using namespace std;

class temperature {
public:
    float celsius, fahrenheit;

    void getdata() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    void convert() {
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    temperature t1;
    t1.getdata();
    t1.convert();
    return 0;
}