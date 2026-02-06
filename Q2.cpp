#include <iostream>
using namespace std;

class circle {
public:
    float radius, area;

    void getdata() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calcarea() {
        area = 3.14 * radius * radius;
        cout << "Area of circle: " << area << endl;
    }
};

int main() {
    circle c1;
    c1.getdata();
    c1.calcarea();
    return 0;
}