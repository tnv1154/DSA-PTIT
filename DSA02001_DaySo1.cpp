#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int step = 0; step < n; step++) {
            cout << "[";
            for (int i = 0; i < n - step; i++) {
                cout << a[i];
                if (i < n - step - 1) cout << " ";
            }
            cout << "]" << endl;

            for (int i = 0; i < n - step - 1; i++) {
                a[i] = a[i] + a[i + 1]; // Tính tổng cặp
            }
        }
    }

    return 0;
}
