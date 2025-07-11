//
// Created by ngvie on 7/11/2025.
//
#include <bits/stdc++.h>
using namespace std;

int n, a[10001];
bool final = false;

void khoiTao() {
    for (int i=1; i<=n; i++) {
        a[i] = i;
    }
}


void nextGen() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;
    if (i == 0) {
        final = true;
    }
    else {
        int j = n;
        while (a[i] > a[j]) {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }

}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        khoiTao();
        final = false;
        string s = "";
        for (int i=1; i<=n; i++) {
            int c;
            cin >> c;
            s += to_string(c);
        }

        int cnt = 1;
        while (!final) {
            string ss = "";
            for (int i = 1; i<=n; i++) {
                ss += to_string(a[i]);
            }
            if (ss == s) {
                cout << cnt << endl;
                break;
            }
            nextGen();
            cnt++;
        }
    }

    return 0;
}