/*
Cho một xâu ký tự S chỉ bao gồm các chữ cái in hoa. Xâu con được định nghĩa 
là một tập con khác rỗng các ký tự lấy từ xâu S giữ nguyên thứ tự ban đầu.
Xâu con không giảm C của S là xâu con của S thỏa mãn với mọi cặp vị trí i < j 
trong xâu thì C[i] ≤ C[j].
Hãy tính độ dài của xâu con không giảm dài nhất trong xâu S.

Input
Chỉ có một dòng ghi xâu S. Độ dài không quá 200.

Output
Ghi ra kết quả tính được trên một dòng

Ví dụ
Input
VIETNAM
Output
2

Input
ABCC
Output
4
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.length();
	int dp[n];
	dp[0] = 1;
	for (int i=1; i<n; i++) {
		dp[i] = 1;
		for (int j = 0; j<i; j++) {
			if (s[j] <= s[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int cnt = *max_element(dp, dp + n);
	cout << cnt ;
	
	return 0;
}