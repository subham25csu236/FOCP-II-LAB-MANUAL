#include <iostream>
using namespace std;
int main() {
    int n;
    float basic, bonus, net;
    cout << "Enter number of employees: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        cout << "Enter basic salary: ";
        cin >> basic;
        bonus = basic * 0.12;
        net = basic + bonus;
        cout << "Bonus = " << bonus << endl;
        cout << "Net Salary = " << net << endl;
    }
    return 0;
}