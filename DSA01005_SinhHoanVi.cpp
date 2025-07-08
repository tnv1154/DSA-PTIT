//
// Created by ngvie on 7/8/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, a[1001];
bool final = false;

void khoiTao() {
    for (int i=1; i<=n; i++) {
        a[i] = i;
    }
}

void display() {
    for (int i=1; i<=n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void nextGen() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        final = true;
    else {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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