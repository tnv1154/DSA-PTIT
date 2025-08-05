//
// Created by ngvie on 8/5/2025.
//
#include<bits/stdc++.h>
using namespace std;

int check(string s) {
    int Max = 0;
    int n = s.length();
    int f[200] = {};
    for (int i=0; i<n; i++) {
        f[s[i]]++;
        Max = max(Max, f[s[i]]);
    }
    if (Max <= n - Max + 1)
        return 1;
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;

    }

    return 0;
}