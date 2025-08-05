//
// Created by ngvie on 8/4/2025.
//
#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int b[], int n) {
    for (int i=0; i<n; i++) {
        if (a[i] != b[i] && a[i] != b[n - i - 1])
            return false;

    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[1001], b[1001];
        for (int i=0; i<n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        if (check(a, b, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}