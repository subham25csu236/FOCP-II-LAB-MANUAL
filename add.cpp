#include <iostream>
using namespace std;

class Addition{
    public:
    int a , b;
    int sum;
void getData () {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}
void sumNumber () {
    sum = a + b;
    cout<<"the sum of two number : " << sum;
}
};
int main(){
    Addition obj;
    obj.getData();
    obj.sumNumber();
    return 0;

}