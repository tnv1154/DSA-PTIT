#include<bits/stdc++.h>
using namespace std;




int main() {
	int n, q;
	cin >> n >> q;
	int a[n + 2];
	for (int i=0; i<=n+1; i++) {
		a[i] = 0;
	}
	for (int i=0; i<q; i++) {
		int x, y;
		cin >> x >> y;
		a[x] = a[x] ^= 1;
		if (y <= n - 1)
			a[y + 1] ^= 1;
	}
	
	int ans[n + 1];
	for (int i=0; i<=n; i++) {
		ans[i] = 0;
	}
	int cur = 0;
	for (int i=1; i<=n; i++) {
		cur ^= a[i];
		cout << cur <<" ";
	}
	cout << "\n";


	return 0;
}