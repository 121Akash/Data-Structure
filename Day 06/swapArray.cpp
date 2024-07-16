#include <iostream>
using namespace std;

void arrSwap(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    arrSwap(arr, l + 1, r - 1);
}

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arrSwap(arr, 0, n - 1);

    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
