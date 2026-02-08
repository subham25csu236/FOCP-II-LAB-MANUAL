#include <iostream>
using namespace std;

class SalesData {
public:
    int n;          // Number of entries
    double* sales;  // Array to store sales figures

    void inputSales() {
        cout << "Enter the number of sales entries: ";
        cin >> n;
        sales = new double[n];  // Dynamic array

        for (int i = 0; i < n; i++) {
            cout << "Enter sales figure " << i + 1 << ": ";
            cin >> sales[i];
        }
    }

    double findMax() {
        double maxSale = sales[0];
        for (int i = 1; i < n; i++) {
            if (sales[i] > maxSale) {
                maxSale = sales[i];
            }
        }
        return maxSale;
    }

    void displayMax() {
        cout << "Maximum sales figure: " << findMax() << endl;
    }

    ~SalesData() {
        delete[] sales;  // Free dynamic memory
    }
};

int main() {
    SalesData data;
    data.inputSales();
    data.displayMax();

    return 0;
}