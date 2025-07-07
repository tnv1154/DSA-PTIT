
#include<bits/stdc++.h>
using namespace std;

int a[100], x[100];
int n, k;
bool final = false;

void khoiTao() {
    for (int i = 0; i < n; i++) {
        x[i] = 0;
    }
}

bool check() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] == 1) {
            sum = sum + a[i];
        }
    }
    if (sum == k) {
        return true;
    }
    return false;
}

void display() {
    for (int i=0; i < n; i++) {
        if (x[i] == 1)
            cout << a[i] << " ";
    }
    cout << endl;
}

void nextGen() {
    int i = n - 1;
    while (i >= 0 && x[i] != 0) {
        x[i] = 0;
        i--;
    }
    if (i == -1)
        final = true;
    else
        x[i] = 1;
}

int main() {
    khoiTao();
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    while (!final) {
        if (check()) {
            display();
            cnt++;
        }
        nextGen();
    }
    cout << cnt;
    return 0;
}