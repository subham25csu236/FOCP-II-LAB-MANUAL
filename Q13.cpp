/* A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
solution to calculate the roots of a quadratic equation.*/
#include <iostream>
#include <cmath>  // For sqrt()
using namespace std;

class Quadratic {
public:
    double a, b, c;

    void inputCoefficients() {
        cout << "Enter coefficients a, b, c (ax^2 + bx + c = 0): ";
        cin >> a >> b >> c;
    }

    void calculateRoots() {
        if (a == 0) {
            cout << "This is not a quadratic equation (a cannot be 0)." << endl;
            return;
        }

        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real and distinct roots: " << root1 << " and " << root2 << endl;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "One real root (repeated): " << root << endl;
        }
        else {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-discriminant) / (2 * a);
            cout << "Complex roots: " << realPart << " + " << imagPart << "i and "
                 << realPart << " - " << imagPart << "i" << endl;
        }
    }
};

int main() {
    Quadratic q;
    q.inputCoefficients();
    q.calculateRoots();

    return 0;
}   