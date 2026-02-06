#include <iostream>
#include <string>
using namespace std;
int main () {
    string name;
    cout << "Enter your name : ";
    cin >> name;
    int a = name.length();
    for(int i = 0 ; i<a ; i+=1){
        cout << name[i];
    }
    return 0;
}