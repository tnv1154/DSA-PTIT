//
// Created by ngvie on 7/15/2025.
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

void display() {
    for (int i=1; i<=k; i++) {
        cout << b[a[i]] << " ";
    }
    cout << endl;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0)
        final = true;
    else {
        a[i]++;
        for (int j=i + 1; j<=k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    set<int> se;
    for (int i=1; i<=n; i++) {
        int x; cin >> x;
        se.insert(x);
    }
    int i = 1;
    for (int x : se) {
        b[i++] = x;
    }
    n = se.size();
    sort(b + 1, b + n + 1);
    khoiTao();
    while (!final) {
        display();
        nextGen();
    }
    return 0;
}