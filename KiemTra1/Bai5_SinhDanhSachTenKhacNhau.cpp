#include<bits/stdc++.h>
using namespace std;

int n, k, a[40];
bool final = false;
vector<string> v;

void khoiTao() {
	for (int i=1; i<=k; i++) {
		a[i] = i;
	}
}

void display() {
	for (int i=1; i<=k; i++) {
		cout << v[a[i] - 1] << " ";
	}
	cout << endl;
}

void nextGen() {
	int i = k;
	while (i > 0 && a[i] >= n - k + i) {
		a[i]++;
		i--;
	}
	if (i == 0) {
		final = true;
	}
	else {
		a[i]++;
		for (int j = i + 1; j<=k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
	cin >> n >> k;
	set<string> se;
	for (int i=0; i<n; i++) {
		string s; cin >> s;
		se.insert(s);
	}
	n = se.size();
	for (auto s : se) {
		v.push_back(s);
	}
	khoiTao();
	while (!final) {
		display();
		nextGen();
	}

	return 0;
}