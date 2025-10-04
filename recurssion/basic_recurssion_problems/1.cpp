#include<bits/stdc++.h>
using namespace std;


void print_names(int i,int n)
{
	if (i > n) {
		return;
	}
	cout << "maneesha" << endl;
	print_names(i+1,n);
}
int main() {
	int n,i;
	cin >> n;
	print_names(1,n);
	return 0;
}

