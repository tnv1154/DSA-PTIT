//
// Created by ngvie on 8/5/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n];
    for (int i=0; i<n; i++)
        cin >> m[i];
    sort(m, m+n, greater<int>());
    int a = m[n - 1] * m[n - 2]; //2 so nho nhat
    int b = m[0] * m[1]; //2 so lon nhat
    int c = b * m[2]; // 3 so lon nhat
    int d = a * m[0]; //3 so nho nhat
    cout << max(a, max(b, max(c, d))) << endl;

    return 0;
}