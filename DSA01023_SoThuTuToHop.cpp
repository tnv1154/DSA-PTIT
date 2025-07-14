//
// Created by ngvie on 7/14/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k, a[10001], b[10001];
bool final = false;

void khoiTao() {
    for (int i=1; i<=k; i++) {
        a[i] = i;
    }
}

bool check() {
    for (int i=1; i<=k; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        final = true;
    }
    else {
        a[i]++;
        for (int j=i + 1; j<=k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i=1; i<=k; i++) {
            cin >> b[i];
        }
        final = false;
        khoiTao();
        int cnt = 1;
        while (!final) {
            if (check()) {
                cout << cnt << endl;
                break;
            }
            nextGen();
            cnt++;
        }

    }
    return 0;
}