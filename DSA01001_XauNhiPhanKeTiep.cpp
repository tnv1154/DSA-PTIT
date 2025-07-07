//
// Created by ngvie on 7/7/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n;
int x[10000];
bool final = false;

void display() {
    for (int i = 0; i < n; i++) {
        cout << x[i];
    }
    cout << endl;
}

void nextGen() {
    int i = n - 1;
    while (i >= 0 && x[i] == 1) {
        x[i] = 0;
        i--;
    }
    if (i == -1) {
        final = true;
    }
    else
        x[i] = 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        n = s.length();
        for (int i = 0; i < s.length(); i++) {
            x[i] = int(int(s[i]) - int('0')) ;
        }
        nextGen();
        display();
    }

    return 0;
}
