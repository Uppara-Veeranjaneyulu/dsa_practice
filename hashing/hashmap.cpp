#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	map<int, int> mpp;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		mpp[arr[i]]++;
	}
	
	//iteraete in the map
	
//	
	
	int q;
	cin >> q;
	while(q--) {
		int number;
		//fetch
		cin >> number;
		cout << mpp[number] << endl;
	}	
	return 0;
}
