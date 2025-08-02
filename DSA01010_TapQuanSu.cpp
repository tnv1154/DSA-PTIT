//
// Created by ngvie on 8/2/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100001], tmp[100001];
bool final = false;


int check() {
    set<int> se;
    for (int i=1; i<=k; i++)
        se.insert(a[i]);
    int cnt = 0;
    for (int i=1 ; i<=k; i++) {
        if (se.find(tmp[i]) == se.end())
            cnt++;
    }
    return cnt;
}

void nextGen() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        final = true;
    else {
        a[i]++;
        for (int j=i + 1; j<=k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        final = false;
        cin >> n >> k;
        for (int i=1; i<=k; i++) {
            cin >> a[i];
            tmp[i] = a[i];
        }
        nextGen();
        if (!final) {
            cout << check() << endl;
        }
        else
            cout << k <<endl;
    }


    return 0;
}