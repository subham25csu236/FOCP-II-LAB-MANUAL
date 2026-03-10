#include <iostream>
using namespace std;
int main() {
    int itemNo, qty;
    float price, amount, discount, finalAmount;
    cout << "Enter Item Number: ";
    cin >> itemNo;
    cout << "Enter Quantity: ";
    cin >> qty;
    cout << "Enter Unit Price: ";
    cin >> price;
    amount = qty * price;
    discount = amount * 0.20;
    finalAmount = amount - discount;
    cout << "Total Amount = " << amount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount;
    return 0;
}