//
// Created by ngvie on 7/22/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        stack<string> st;
        queue<int> q;
        for (int i=0; i<n; i++) {
            int x; cin >> x;
            q.push(x);
        }
        for (int i=1; i<= n; i++) {
            string s = "[";
            int x;
            for (int j=n-i; j >= 0; j--) {
                x = q.front();
                s += to_string(x);
                if (j != 0)
                    s += " ";
                q.pop();
                x += q.front();
                if (j != 0)
                    q.push(x);
            }
            s += "]";
            st.push(s);
        }
        while (!st.empty()) {
            string s = st.top();
            st.pop();
            cout << s <<" ";
        }
        cout << endl;
    }

    return 0;
}