//
// Created by ngvie on 8/1/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1000005], b[1000005];
bool final = false;

void khoiTao() {
    for (int i=1; i<=k; i++) {
        a[i] = i;
    }
}

bool check() {
    if (k <= 1)
        return true;
    for (int i=1; i<k; i++) {
        if (b[a[i]] >= b[a[i + 1]])
            return false;
    }
    return true;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        final = true;
    else {
        a[i]++;
        for (int j= i + 1; j<=k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> b[i];
    khoiTao();
    int cnt = 0;
    while (!final) {
        if (check())
            cnt++;
        nextGen();
    }
    cout << cnt;

    return 0;
}