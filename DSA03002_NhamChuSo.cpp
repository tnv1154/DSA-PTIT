//
// Created by ngvie on 7/12/2025.
//
#include <bits/stdc++.h>
using namespace std;

int lonNhat(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);
    for (int i=0; i<sa.length(); i++) {
        if (sa[i] == '5') {
            sa[i] = '6';
        }
    }
    for (int i=0; i<sb.length(); i++) {
        if (sb[i] == '5') {
            sb[i] = '6';
        }
    }
    a = stoi(sa);
    b = stoi(sb);
    return a + b;
}

int nhoNhat(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);
    for (int i=0; i<sa.length(); i++) {
        if (sa[i] == '6') {
            sa[i] = '5';
        }
    }
    for (int i=0; i<sb.length(); i++) {
        if (sb[i] == '6') {
            sb[i] = '5';
        }
    }
    a = stoi(sa);
    b = stoi(sb);
    return a + b;
}

int main() {
    int a, b; cin >> a >> b;
    cout << nhoNhat(a, b) << " " << lonNhat(a, b) << endl;
    return 0;
}
