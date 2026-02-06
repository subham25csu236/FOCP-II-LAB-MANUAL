#include <iostream>
using namespace std;

class bill {
public:
    int item_no, quantity;
    float unit_price, total, discount, final_amount;

    void getdata() {
        cout << "Enter item number: ";
        cin >> item_no;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }

    void calculate() {
        total = quantity * unit_price;
        discount = 0.20 * total;
        final_amount = total - discount;

        cout << "Total Amount: " << total << endl;
        cout << "Discount (20%): " << discount << endl;
        cout << "Final Bill Amount: " << final_amount << endl;
    }
};

int main() {
    bill b1;
    b1.getdata();
    b1.calculate();
    return 0;
}