//
// Created by ngvie on 8/2/2025.
//
#include<bits/stdc++.h>
using namespace std;

string s, ans;
int n;

void nhiPhan() {
    ans[0] = s[0];
    for (int i=1; i<n; i++) {
        int cur = s[i] - '0';
        int prev = ans[i - 1] - '0';
        if (cur == prev)
            ans[i] = '0';
        else
            ans[i] = '1';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.length();
        nhiPhan();
        for (int i=0; i<n; i++)
            cout << ans[i];
        cout << endl;

    }

    return 0;
}