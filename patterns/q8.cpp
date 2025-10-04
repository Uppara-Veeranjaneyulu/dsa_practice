#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
	for (int i=0;i<n;i++) {
		//space
		
		for (int j=0;j<i;j++) {
			cout << " ";
		}
		
		for (int k=0;k<2*n - (2*i+1);k++) {
			cout << "*";
		}
		
		for(int l=0;l<i;l++) {
			cout << " ";
		}
		cout << endl;
		//star
		
		//space
	}
}

int main()
{
	int n;
	cin >> n;
	print(n);
	return 0;
}
