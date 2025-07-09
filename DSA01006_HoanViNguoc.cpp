//
// Created by ngvie on 7/8/2025.
//
#include<bits/stdc++.h>
using namespace std;

int n, a[1001];
bool final = false;
vector<vector<int>> v;

void addVector() {
    vector<int> x;
    for (int i=1; i<=n; i++) {
        x.push_back(a[i]);
    }
    v.push_back(x);
}

void display() {
    for (int i=0; i < v.size(); i++) {
        for (int j=0; j < v[i].size(); j++) {
            cout << v[i][j];
        }
        cout << " ";
    }
    cout << endl;
}

void khoiTao() {
    for (int i=1; i <= n; i++) {
        a[i] = i;
    }
}

void nextGen() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        final = true;
    else {
        int j = n;
        while  (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        final = false;
        cin >> n;
        khoiTao();
        while (!final) {
            addVector();
            nextGen();
        }
        reverse(v.begin(), v.end());
        display();
        v.clear();
    }
    return 0;
}