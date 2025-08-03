//
// Created by ngvie on 8/3/2025.
//
#include<bits/stdc++.h>
using namespace std;

int a[100005];
int n;

void gray() {
    cout << a[0];
    for (int i=1; i<n; i++)
        cout << (a[i] ^ a[i - 1]);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        n = s.length();
        for (int i=0; i<n; i++)
            a[i] = s[i] - '0';
        gray();

    }


    return 0;
}