//
// Created by ngvie on 8/7/2025.
//
#include<bits/stdc++.h>
using namespace  std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<string> st;
        for (int i=s.length() - 1; i>=0; i--) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                st.push(string(1, s[i]));
            else {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push(a + b + string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}