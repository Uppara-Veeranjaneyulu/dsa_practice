#include<bits/stdc++.h>
using namespace std;


void print_names(int i,int n)
{
	if (i < 1) {
		return;
	}
	cout << i << endl;
	print_names(i-1,n);
}
int main() {
	int n,i;
	cin >> n;
	print_names(n,n);
	return 0;
}

