//
// Created by ngvie on 8/7/2025.
//
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<string> st;
        int n = s.length();
        for (int i = n - 1; i>=0; i--) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                st.push(string(1, s[i]));
            else {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string c = "(" + a + string(1, s[i]) + b + ")";
                st.push(c);
            }
        }
        cout << st.top() << endl;

    }

    return 0;
}