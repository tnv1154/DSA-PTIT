//
// Created by ngvie on 7/9/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n;
int m = n - 2;
char a[10001];
bool final = false;

void khoiTao() {
    a[1] = 'H';
    a[n] = 'A';
    for (int i=2; i < n; i++) {
        a[i] = 'A';
    }
}

bool check() {
    for (int i=1; i<n; i++) {
        if (a[i] == 'H' && a[i + 1] == 'H') {
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
    int i=n-1;
    while (i > 0 && a[i] != 'A') {
        a[i] = 'A';
        i--;
    }
    if (i == 0)
        final = true;
    else {
        a[i] = 'H';
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        khoiTao();
        final = false;
        while (!final) {
            if (check()) {
                display();
            }
            nextGen();
        }
    }

    return 0;
}