/*
Cho xâu ký tự str. Nhiệm vụ của bạn là tìm số phép chèn tối thiểu các ký tự vào str để str trở thành xâu đối xứng. Ví dụ: str =”ab” ta có số phép chèn tối thiểu là 1 để trở thành xâu đối xứng “aba” hoặc “bab”. Với xâu str=”aa” thì số phép chèn tối thiểu là 0. Với xâu str=”abcd” có số phép chèn tối thiểu là 3 để trở thành xâu “dcbabcd”
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
T, str thỏa mãn ràng buộc: 1≤T≤100;  1≤length(str)≤40.
Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
2
abcd
aba

Output
3
0

*/

#include<bits/stdc++.h>
using namespace std;

int minInsert(string str) {
	int n = str.size();
	vector<vector<int>> dp(n, vector<int>(n, 0));
	
	for (int i=0; i<n; i++) {
		dp[i][i] = 1;
	}
	for (int len = 2; len <= n; len++) {
		for (int i=0; i<=n - len; i++) {
			int j = i + len - 1;
			if (str[i] == str[j])
				dp[i][j] = (len == 2 ? 2 : dp[i + 1][j - 1] + 2);
			else {
				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
			}
		}
	}
	return n - dp[0][n - 1];
	
}

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str);
		cout << minInsert(str) << endl;
	}
	return 0;
}