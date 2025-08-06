//
// Created by ngvie on 8/6/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    string s;
    while (cin >> s) {
        if (s == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        if (s == "pop") {
            if (!st.empty()) {
                st.pop();
            }
        }
        if (s == "show") {
            if (st.empty()) {
                cout << "empty" << endl;
            }
            else {
                vector<int> v;
                while (!st.empty()) {
                    int x = st.top();
                    v.push_back(x);
                    st.pop();
                }
                for (int i=v.size() - 1; i >= 0; i--) {
                    cout << v[i] <<" ";
                    st.push(v[i]);
                }
                cout << endl;
            }
        }


    }

    return 0;
}