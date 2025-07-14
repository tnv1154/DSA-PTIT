//
// Created by ngvie on 7/14/2025.
//
#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001];
bool final = false;

void khoiTao() {
    for (int i=1; i<=k; i++) {
        a[i] = i;
    }
}

void display() {
    for (int i=1; i<=k; i++) {
        cout << (char)(a[i] + 'A' - 1);
    }
    cout << endl;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        final = true;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        khoiTao();
        final = false;
        while (!final) {
            display();
            nextGen();
        }
    }

    return 0;
}