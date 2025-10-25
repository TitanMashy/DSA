#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0}; // if only lowercase
    // int hash[256] = {0}; // if both uppercase & lowercase 
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
        // hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
        // cout << hash[c] << endl;
    }
    return 0;
}