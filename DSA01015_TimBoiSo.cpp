//
// Created by ngvie on 8/3/2025.
//
#include<bits/stdc++.h>
using namespace std;

string boiSo(int n) {
    queue<string> q;
    q.push("9");
    while (q.size()) {
        string tmp = q.front();
        q.pop();
        if (stoll(tmp) % n == 0)
            return tmp;

        q.push(tmp + "0");
        q.push(tmp + "9");
    }
    return "-1";

}



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << boiSo(n) << endl;

    }

    return 0;
}