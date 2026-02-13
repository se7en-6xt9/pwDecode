#include <iostream>
using namespace std;

void printDec(int n) {
    if (n == 0) {
        return;   // base case
    }
    cout << n << " ";
    printDec(n - 1);
}

int main() {
    int n;
    cin >> n;
    printDec(n);
    return 0;
}
