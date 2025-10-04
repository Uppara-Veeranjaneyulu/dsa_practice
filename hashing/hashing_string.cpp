#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int q;
	cin >> q;
	
	//precompute
	int hash[256] = {0};
	for(int i=0;i<s.size();i++) {
		hash[s[i]]++;
	}
	
	while(q--) {
		char c;
		cin >> c;
		//fetch
		cout << hash[c] << endl;
	}
	
	return 0;
}
