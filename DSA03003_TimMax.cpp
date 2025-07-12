//
// Created by ngvie on 7/12/2025.
//
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int sum = 0;
        for (int i=0; i<n; i++) {
            sum += (a[i] * i % 1000000007);
            sum %= 1000000007;
        }
        cout << sum << endl;
    }
    return 0;
}