/*. A teacher wants to calculate the average marks of three students to determine the class performance. 
Implement a solution to accept three numbers and compute their average.*/
#include <iostream>
using namespace std;
int main() {
    float m1, m2, m3, avg;
    cout << "Enter marks of first student: ";
    cin >> m1;
    cout << "Enter marks of second student: ";
    cin >> m2;
    cout << "Enter marks of third student: ";
    cin >> m3;
    avg = (m1 + m2 + m3) / 3;
    cout << "Average marks = " << avg << endl;
    return 0;
}