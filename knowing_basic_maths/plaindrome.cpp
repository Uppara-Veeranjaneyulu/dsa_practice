#include<bits/stdc++.h>
using namespace std;

//void checkPalindrome(int n) {
//	if 
//}

int main() {
	int n;
	cout << "enter a number: ";
	cin >> n;
	int revNum=0;
	int temp = n;
	while(n > 0) {
		int last = n%10;
		n=n/10;
		revNum = revNum * 10 +last;
	}
	if (temp == revNum) {
			cout << "Palindrome!";
		} else {
			cout << "Not a Palindrome!";
		}
	
	
	return 0;
}
