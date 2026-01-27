/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
the area of a circle. */
#include <iostream>
using namespace std;
int main() {
    float r, area;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    area = 3.14 * r * r;
    cout << "Area of the circle = " << area << endl;
    return 0;
}