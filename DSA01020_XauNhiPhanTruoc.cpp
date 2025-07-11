//
// Created by ngvie on 7/11/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, a[10001];

void display() {
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void nextGen() {
    int i = n;
    while (i > 0 && a[i] == 0) {
        a[i] = 1;
        i--;
    }
    if (i == 0) {
        for (int i=1; i<=n; i++) {
            a[i] = 1;
        }
    }
    else {
        a[i] = 0;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        n = s.length();
        for (int i=0; i<n; i++) {
            a[i + 1] = (int)(s[i] - '0');
        }
        nextGen();
        display();
    }
    return 0;
}