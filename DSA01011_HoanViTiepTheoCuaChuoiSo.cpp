//
// Created by ngvie on 8/2/2025.
//
#include<bits/stdc++.h>
using namespace std;

char s[101];
int len;
bool final;

void nextGen() {
    int i = len - 1;
    while (i > 0 && s[i] >= s[i + 1])
        i--;
    if (i == 0)
        final = true;
    else {
        int j = len;
        while (s[i] >= s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s + i + 1, s + len + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        final = false;
        int n; cin >> n;
        string tmp;
        cin >> tmp;
        len = tmp.length();
        for (int i=0; i<len; i++)
            s[i + 1] = tmp[i];
        nextGen();
        if (final)
            cout << n <<" "<< "BIGGEST";
        else {
            cout << n <<" ";
            for (int i=1; i<=len; i++)
                cout << s[i];
        }
        cout << endl;

    }

    return 0;
}
