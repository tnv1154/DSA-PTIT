//
// Created by ngvie on 8/6/2025.
//
#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> st;
    for (auto c : s) {
        if (c == ')') {
            bool ok = true;
            while (st.top() != '(') {
                int tmp = st.top();
                if (tmp == '+' || tmp == '-' || tmp ==  '*' || tmp == '/')
                    ok = false;
                st.pop();
            }
            if (ok)
                return true;
            st.pop();
        }
        else
            st.push(c);
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (check(s))
            cout << "Yes" <<endl;
        else
            cout << "No" << endl;
    }

    return 0;
}