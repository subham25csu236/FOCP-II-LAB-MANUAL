#include <iostream>
using namespace std;

class salary {
public:
    int n;
    float basic, bonus, net;

    void getdata() {
        cout << "Enter number of employees: ";
        cin >> n;
    }

    void calculate() {
        for (int i = 1; i <= n; i++) {
            cout << "\nEnter basic salary of employee " << i << ": ";
            cin >> basic;

            bonus = 0.12 * basic;
            net = basic + bonus;

            cout << "Bonus: " << bonus << endl;
            cout << "Net Salary: " << net << endl;
        }
    }
};

int main() {
    salary s1;
    s1.getdata();
    s1.calculate();
    return 0;
}