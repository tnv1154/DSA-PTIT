//
// Created by ngvie on 8/3/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100001];
        for (int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        long long sum1 = 0, sum2 = 0;
        for (int i=0; i<n; i++) {
            if (i % 2 == 0)
                sum1 = sum1 * 10 + a[i];
            else
                sum2 = sum2 * 10 + a[i];
        }
        cout << sum1 + sum2 << endl;
    }

    return 0;
}