#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int dp[n + 1] = {};
		dp[0] = 1;
		for (int i=1; i<=n; i++) {
			for (int j =1; j<=k; j++) {
				if (i - j < 0)
					break;
				else {
					dp[i] = (dp[i] + dp[i - j]) % 1000000007;
				}
			}
		}
		cout << dp[n] << endl;
	}
	
	return 0;
}