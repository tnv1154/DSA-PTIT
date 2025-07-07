//
// Created by ngvie on 7/7/2025.
//

#include<bits/stdc++.h>
using namespace std;

int n, k, a[1001];

void display() {
    for (int i=1; i<=k; i++) {
        cout << a[i] <<" ";
    }
    cout << endl;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        for (int j = 1; j<=k; j++) {
            a[j] = j;
        }
    }
    else {
        a[i]++;
        for (int j=i+1; j<=k; j++) {
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
            cin >> a[i];
        }
        nextGen();
        display();
    }
    return 0;
}