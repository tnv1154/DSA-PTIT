//
// Created by ngvie on 8/2/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n;
int a[10001];
bool final = false;

void khoiTao() {
    for (int i=1; i<=n; i++)
        a[i] = 0;
}

void display() {
    cout << a[1];
    for (int i=2; i<=n; i++)
        cout << (a[i] ^ a[i - 1]) ;
    cout << " ";
}

void nextGen() {
    int i = n;
    while (i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        final = true;
    else
        a[i] = 1;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        final = false;
        cin >> n;
        khoiTao();
        while (!final) {
            display();
            nextGen();
        }
        cout << endl;
    }
    return 0;
}