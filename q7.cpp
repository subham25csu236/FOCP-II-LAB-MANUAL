#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three scores: ";
    cin >> a >> b >> c;
    if(a > b && a > c)
        cout << "Player 1 wins";
    else if(b > a && b > c)
        cout << "Player 2 wins";
    else
        cout << "Player 3 wins";
    return 0;
}