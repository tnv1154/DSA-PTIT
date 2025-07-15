//
// Created by ngvie on 7/15/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, a[10001];
bool final = false;

void khoiTao() {
    a[1] = 8;
    a[n] = 6;
    for (int i=2; i<n; i++) {
        a[i] = 6;
    }
}

bool check() {
    for (int i=1; i<n; i++) {
        if (a[i] == 8 && a[i+1] == 8) {
            return false;
        }
    }
    for (int i=1; i<=n-3; i++) {
        if (a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6) {
            return false;
        }
    }
    return true;
}

void display() {
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void nextGen() {
    int i = n - 1;
    while (i > 0 && a[i] == 8) {
        a[i] = 6;
        i--;
    }
    if (i == 0)
        final = true;
    else {
        a[i] = 8;
    }
}

int main() {
    cin >> n;
    khoiTao();
    while (!final) {
        if (check()) {
            display();
        }
        nextGen();
    }
    return 0;
}