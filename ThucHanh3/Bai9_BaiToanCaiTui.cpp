#include<bits/stdc++.h>
using namespace std;

int main () {
	int n,m;
	cin >> n >> m;
	int val[n + 1], w[n + 1];
	for (int i=1; i<=n; i++) {
		cin >> w[i] >> val[i];
	}
	int dp[m + 1] = {};
	for (int i=1; i<=n; i++) {
		for (int j=m; j >= w[i]; j--) {
			dp[j] = max(dp[j], dp[j - w[i]] + val[i]);
		}
	}
	cout << dp[m];
	return 0;
}