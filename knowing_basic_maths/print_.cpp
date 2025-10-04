#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";          // print the divisor
            if ((n / i) != i) {        // avoid duplicate when i == sqrt(n)
                cout << n / i << " ";
            }
        }
    }
    return 0;
}
