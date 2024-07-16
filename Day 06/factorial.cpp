//factorial


// time complexity -> o(n)
// space complexity -> o(n)


#include<iostream>
using namespace std;

int fact(int n) {
    if(n <1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}

