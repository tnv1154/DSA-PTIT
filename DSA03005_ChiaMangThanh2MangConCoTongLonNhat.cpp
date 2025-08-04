//
// Created by ngvie on 8/4/2025.
//
#include<bits/stdc++.h>
using namespace std;

int cal(int a[], int n, int k) {
    int sum1 = 0, sum2 = 0;
    for (int i=0; i<k; i++)
        sum1 += a[i];

    for (int i=k; i<n; i++)
        sum2 += a[i];
    return abs(sum1 - sum2);

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a +  n);
        if (k < n -k)
            cout << cal(a, n, k) << endl;
        else
            cout << cal(a, n, n - k) << endl;



    }

    return 0;
}