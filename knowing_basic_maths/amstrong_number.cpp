#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "enter a number : ";
	cin >> n;
	int temp = n;
	int sum=0;
	int t;
	
	int digits=0;t=n;
	while(t>0) {
		digits++;
		t/=10;
	}
	
	t=n;
	while (t > 0) {
		int last = t%10;
		sum = sum + pow(last,digits);
		t = t/10; 
	}
	if (sum == temp) 
		{
			cout << "amstrong number";
		} else 
		{
			cout << "not amstrong";
		}
	return 0;
}
