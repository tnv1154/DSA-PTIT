//
// Created by ngvie on 7/9/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n;
char x[10001];
bool final = false;

void khoiTao() {
    for (int i=1; i <= n; i++) {
        x[i] = 'A';
    }
}

void display() {
    for (int i=1; i<=n; i++) {
        cout << x[i];
    }
    cout << " ";
}

void nextGen() {
    int i = n;
    while (i > 0 && x[i] == 'B') {
        x[i] = 'A';
        i--;
    }
    if (i == 0)
        final = true;
    else {
        x[i] = 'B';
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        final = false;
        khoiTao();
        while (!final) {
            display();
            nextGen();
        }
        cout << endl;
    }
    return 0;
}