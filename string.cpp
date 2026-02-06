#include <iostream>
#include <string>
using namespace std;
int main () {
    string firstname;
    cout << "Enter your first name : ";
    cin >> firstname;
    string  lastname;
    cout << "Enter your last name : ";
    cin >> lastname;
    cout << "Your name : " << firstname << lastname << endl;
    return 0;
}