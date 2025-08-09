//
// Created by ngvie on 8/9/2025.
//
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> res;
        queue<string> q;
        q.push("6");
        q.push("8");
        int l = 0;
        while (l <= n) {
            string s = q.front();
            q.pop();
            res.push_back(s);
            q.push(s + "6");
            q.push(s + "8");
            l = q.front().length();
        }
        for (int i=res.size() - 1; i>=0; i--)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}