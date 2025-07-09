#include<bits/stdc++.h>
using namespace std;

int n, k, x[100001], a[100001];
bool final = false;

void khoiTao() {
	for (int i = 1; i <= k; i++) {
		x[i] = i;
	}
}

void display() {
	for (int i=1; i<=k; i++) {
		cout << a[x[i]] <<" ";
	}
	cout << endl;
}

void nextGen() {
	int i = k;
	while (i > 0 && x[i] == n - k + i) {
		i--;
	}
	if (i == 0) 
		final = true;
	else {
		x[i]++;
		for (int j = i + 1; j <= k; j++) {
			x[j] = x[j - 1] + 1;
		}
	}
}

int main() {
	cin >> n >> k;
	khoiTao();
	for (int i=1; i<=n; i++) 
		cin >> a[i];
		
	sort(a + 1, a + n + 1);

	while (!final) {
		display();
		nextGen();
	}
	
	return 0;
}