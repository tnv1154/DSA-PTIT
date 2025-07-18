//
// Created by ngvie on 7/18/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<string> v, ans;
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
    map<string, bool> mp;
    for (int i=0; i<n; i++) {
        cin >> s;
        mp[s] = 1;
    }
    for (auto &i : mp)
        v.push_back(i.first);
    Try(1);
    return 0;
}