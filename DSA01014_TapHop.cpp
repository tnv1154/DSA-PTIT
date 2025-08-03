//
// Created by ngvie on 8/3/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k, s;
bool final;
int a[105];

void khoiTao() {
    for (int i=1; i<=k; i++)
        a[i] = i;
}

bool check() {
    int sum = 0;
    for (int i =1; i<=k; i++)
        sum += a[i];
    if (sum == s)
        return true;
    return false;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        final = true;
    else {
        a[i]++;
        for (int j=i + 1; j<=n; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main() {
    while (true) {
        final = false;
        int cnt = 0;
        cin >> n >> k >> s;
        if (k > n) {
            cout << "0" << endl;
            continue;
        }
        if (n == 0 && k == 0 && s == 0)
            return 0;
        khoiTao();
        while (!final) {
            if (check()) {
                cnt++;
            }
            nextGen();
        }
        cout << cnt << endl;
    }

    return 0;
}