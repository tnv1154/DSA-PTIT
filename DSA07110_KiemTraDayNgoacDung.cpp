//
// Created by ngvie on 8/7/2025.
//
#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> st;
    int n = s.length();
    for (int i=0; i<n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{' || st.empty()) {
            st.push(s[i]);
        }
        else
            if (s[i] == ')') {
                if (st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            if (s[i] == ']') {
                if (st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            if (s[i] == '}') {
                if (st.top() == '{')
                    st.pop();
                else
                    return false;
            }
    }
    if (!st.empty())
        return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES" ;
        else
            cout << "NO";
        cout << endl;

    }

    return 0;
}