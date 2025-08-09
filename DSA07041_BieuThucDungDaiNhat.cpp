//
// Created by ngvie on 8/9/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
        while (true) {
            int pos = s.find("()");
            if (pos == -1)
                break;
            else {
                count += 2;
                s.erase(pos, 2);
            }
        }
        cout << count << endl;
    }

    return 0;
}