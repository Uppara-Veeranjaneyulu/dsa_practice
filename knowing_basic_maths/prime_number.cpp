#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "enter a number: ";
	cin >> n;
	
	if (n <= 1) {
		cout << "not a prime";
	}
	
	for (int i=2;i<=sqrt(n);i++) {
		if (n % i == 0) {
			cout << "not a prime";
			return 0;
		}
	}
	cout << "prime";
	return 0;
}
