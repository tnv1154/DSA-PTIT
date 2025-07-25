#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int dp[n + 1];
	dp[0] = 1;
	for (int i=1; i<n; i++) {
		dp[i] = 1;
		for (int j=0; j<i; j++) {
			if (s[i] >= s[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	cout << *max_element(dp, dp + n);
	
	return 0;
}