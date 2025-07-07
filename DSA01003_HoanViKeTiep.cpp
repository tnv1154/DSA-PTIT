//
// Created by ngvie on 7/7/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, a[10001];

void display() {
    for (int i=1; i<=n; i++) {
        cout << a[i] <<" ";
    }
    cout << endl;
}

void nextGen() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i+1])
        i--;
    if (i == 0) {
        reverse(a+1, a+n+1);
        display();
    }
    else {
        int j = n;
        while ( a[i] > a[j] )
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        display();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        nextGen();
    }
    return 0;
}