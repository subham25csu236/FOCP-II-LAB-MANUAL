/* A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
expenses and apply a discount accordingly. */
#include <iostream>
using namespace std;

class Order {
public:
    int quantity;
    double pricePerItem;
    double total;

    void inputOrder() {
        cout << "Enter quantity of items: ";
        cin >> quantity;
        cout << "Enter price per item: ";
        cin >> pricePerItem;
    }

    void calculateTotal() {
        total = quantity * pricePerItem;
        if (quantity > 1000) {
            total = total * 0.9; // Apply 10% discount
        }
    }

    void displayTotal() {
        cout << "Total expenses: " << total << endl;
        if (quantity > 1000)
            cout << "Discount applied: 10%" << endl;
        else
            cout << "No discount applied." << endl;
    }
};

int main() {
    Order o;
    o.inputOrder();
    o.calculateTotal();
    o.displayTotal();

    return 0;
}