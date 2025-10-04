#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s) {
    int n = s.length();
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-i-1]) {
            return false; // mismatch found
        }
    }
    return true; // no mismatch, palindrome
}

int main() {
    string s;
    cin >> s;
    if(check_palindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
