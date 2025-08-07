//
// Created by ngvie on 8/6/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int cnt = 0;
        string s;
        cin >> s;
        while (s.length()) {
            int x = s.find("()");
            if (x == -1) {
                if (s[0] == ')') {
                    s[0] = '(';
                    cnt++;
                }
                if (s[s.length() - 1] == '(') {
                    s[s.length() - 1] = ')';
                    cnt++;
                }
            }
            else {
                s.erase(x, 2);
            }
        }
        cout << cnt << endl;


    }

    return 0;
}