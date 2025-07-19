//
// Created by ngvie on 7/19/2025.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long dp[55];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i=4; i<=50; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i -3];
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] <<endl;
    }
    return 0;
}