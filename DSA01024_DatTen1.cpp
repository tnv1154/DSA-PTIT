//
// Created by ngvie on 7/18/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<string> v;
int b[35];

void display() {
    for (int i=1; i<= k; i++)
        cout << v[b[i] - 1] << " ";
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j<= v.size(); j++) {
        b[i] = j;
        if (i == k)
            display();
        else
            Try(i+1);
    }
}

int main() {
    cin >> n >> k;
    string s;
    set<string> se;
    for (int i=0; i<n; i++) {
        cin >> s;
        se.insert(s);
    }
    for (auto i : se)
        v.push_back(i);
    Try(1);
    return 0;
}