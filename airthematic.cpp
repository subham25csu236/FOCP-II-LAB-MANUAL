#include<iostream>
using namespace std;
int main() {
    int a, b, sum, sub, mul , div;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    cout<<"The sum of two numbers is "<<sum;
    cout<<"\nThe subtraction of two numbers is "<<sub;
    cout<<"\nThe multiplication of two numbers is "<<mul;
    cout<<"\nThe division of two numbers is "<<div;
    return 0;
}