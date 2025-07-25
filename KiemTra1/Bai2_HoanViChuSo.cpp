#include<bits/stdc++.h>
using namespace std;

int n, a[20], b[20];
bool final = false;

void khoiTao() {
	for (int i=1; i<=n; i++) {
		a[i] = i;
	}
}

void display() {
	int x = 0;
	for (int i=1; i<=n; i++) {
		x = x * 10 + b[a[i]];
	}
	cout << x << endl;
} 

void nextGen() {
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1])
		i--;
	if (i == 0) 
		final = true;
	else {
		int j = n;
		while (a[i] > a[j]) 
			j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		n = s.length();
		for (int i=0; i<s.length(); i++) {
			b[i + 1] = s[i] - '0'; 
		}
		sort(b + 1, b + n + 1);
		
		khoiTao();
		final = false;
		while(!final) {
			display();
			nextGen();
		}
		
	}



	
	return 0;
}