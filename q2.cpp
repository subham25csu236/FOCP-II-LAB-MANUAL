#include <iostream>
using namespace std;
int main() {
    float r, area;
    const float PI = 3.14;
    cout << "Enter radius: ";
    cin >> r;
    area = PI * r * r;
    cout << "Area of circle = " << area;
    return 0;
}