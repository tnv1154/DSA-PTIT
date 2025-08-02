//
// Created by ngvie on 8/1/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k;
bool final = false;
vector<char> a;
vector<vector<char>> v;

bool check() {
    int cnt = 0, res = 0;
    for (int i=1; i<=n; i++) {
        if (a[i] == 'B') {
            if (cnt == k)
                res++;
            cnt = 0;
        }
        else
            cnt++;
    }
    if (cnt == k)
        res++;
    return res == 1;
}

void nextGen() {
    int i=n;
    while (i > 0 && a[i] == 'B') {
        a[i] = 'A';
        i--;
    }
    if (i == 0)
        final = true;
    else {
        a[i] = 'B';
    }
}

int main() {
    cin >> n >> k;
    a.resize(n + 1, 'A');
    int cnt = 0;
    while (!final) {
        if (check()) {
            v.push_back(a);
            cnt++;
        }
        nextGen();
    }
    cout << cnt << endl;
    for (auto x : v) {
        for (int i=1; i<=n; i++)
            cout << x[i];
        cout << endl;
    }
    return 0;
}