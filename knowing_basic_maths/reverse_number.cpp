#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "enter a number: ";
	cin >> n;
	int revNum=0;
	
	while(n > 0) {
		int last = n%10;
		n=n/10;
		revNum = revNum * 10 +last; 
	}
	cout << "ReverseNumber :" << revNum;
	return 0;
}
