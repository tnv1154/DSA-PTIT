//
// Created by ngvie on 8/5/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }
        long long sum = 0;
        while (q.size() > 1) {
            long long x = q.top();
            q.pop();
            long long y = q.top();
            q.pop();
            long long s = x + y;
            q.push(s);
            sum += s;
        }
        cout << sum << endl;
    }

    return 0;
}