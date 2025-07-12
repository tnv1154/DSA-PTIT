//
// Created by ngvie on 7/11/2025.
//
#include <bits/stdc++.h>
using namespace std;

int k, n, a[10001], b[10001];
bool final = false;
void display() {
    if (final == false) {
        int cnt = 0;
        set<int> se;
        for (int i=1; i<=k; i++) {
            se.insert(a[i]);
            se.insert(b[i]);
        }
        cnt = se.size() - k ;
        cout << cnt << endl;
    }
    else {
        cout << k << endl;
    }
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0) {
        final = true;
    }
    else {
        for (int j = i + 1; j<=k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        final = false;
        cin >> n >> k;
        for (int i=1; i<=k; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        nextGen();
        display();
    }
    return 0;
}