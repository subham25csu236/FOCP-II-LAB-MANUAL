#include <iostream>
using namespace std;
int main() {
    int item_no, quantity;
    float unit_price, total_amount, discount, final_amount;
    cout << "Enter item number: ";
    cin >> item_no;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unit_price;
    total_amount = quantity * unit_price;
    discount = 0.20f * total_amount;
    final_amount = total_amount - discount;
    cout << "\nItem Number: " << item_no;
    cout << "\nTotal Amount: " << total_amount;
    cout << "\nDiscount (20%): " << discount;
    cout << "\nFinal Bill Amount: " << final_amount << endl;
    return 0;
}