#include <iostream>
using namespace std;
void indexreturns (int numsSize, int target, int arr[]) {
    for (int i = 0 ; i < numsSize ; i += 1) {
        for (int j = i + 1 ; j < numsSize ; j += 1) {
            if ((arr[i] + arr[j]) == target) {
                cout << "Index : " << i << " and " << j << endl;
                return;
            }else{
                cout << "No such sum of index exists" << endl;
            }
        }
    }
}
int main () {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i += 1) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter the value of target: ";
    cin >> target;
    indexreturns(n, target, arr);
    return 0;
}