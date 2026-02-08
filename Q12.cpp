// A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
// check the triangle type based on its sides.
#include <iostream>
using namespace std;

class Triangle {
public:
    double side1, side2, side3;

    void inputSides() {
        cout << "Enter the three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }

    bool isValid() {
        // Triangle inequality rule
        return (side1 + side2 > side3) &&
               (side2 + side3 > side1) &&
               (side1 + side3 > side2);
    }

    void classify() {
        if (!isValid()) {
            cout << "The given sides do NOT form a valid triangle." << endl;
            return;
        }

        if (side1 == side2 && side2 == side3) {
            cout << "Triangle is Equilateral." << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "Triangle is Isosceles." << endl;
        }
        else {
            cout << "Triangle is Scalene." << endl;
        }
    }
};

int main() {
    Triangle t;
    t.inputSides();
    t.classify();

    return 0;
}