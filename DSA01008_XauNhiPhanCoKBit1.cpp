//
// Created by ngvie on 7/9/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k, x[10001];
bool final=false;

void khoiTao() {
    for (int i=1; i<=n; i++) {
        x[i] = 0;
    }
}

void display() {
    string s;
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (x[i] == 1)
            cnt++;
        s += to_string(x[i]);
    }
    if (cnt == k)
        cout << s << endl;
}

void nextGen() {
    int i = n;
    while (i > 0 && x[i] != 0) {
        x[i] = 0;
        i--;
    }
    if (i == 0)
        final = true;
    else {
        x[i] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        final = false;
        khoiTao();
        while (!final) {
            display();
            nextGen();
        }
    }

    return 0;
}
