#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int count;
	
	cout << "enter a number: ";
	cin >> n;
	while(n > 0) {
		int last = n%10;
		count++;
		n = n/10;
	}
	cout << "count" << count;
	return 0;
}
