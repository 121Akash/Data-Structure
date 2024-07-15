#include <iostream>
using namespace std;

void print(int i, int n) {
    if (i > n)
        return;
    else {
        cout << "Akash" << " ";
        print(i + 1, n); 
    }
}

int main() {
    int i = 1;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    
    return 0;
}
