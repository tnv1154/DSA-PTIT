/*
Xét dãy xâu ký tự được tạo bởi quy tắc sau:

F[0]  =  “A”
F[1]  =  “B”
…
F[n]   =  F[n-1]  +  F[n-2]  với n > 1
Với dấu + ở đây là phép nối 2 xâu với nhau.

Cho hai số nguyên dương n và k. Hãy đếm số lượng ký tự ‘B’ trong k vị trí đầu tiên của xâu F[n].

Input

Dòng đầu tiên ghi số bộ test (không quá 30)

Mỗi bộ test viết trên một dòng 2 số n và k (0 ≤ n ≤ 45; k không vượt quá độ dài xâu F[n])

Output

Ghi ra kết quả mỗi bộ test trên một dòng.

Ví dụ
Input
4
0 1
1 1
3 2
7 7

Output

0
1
1
4
*/
#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 46;
long long len[MAX_N];
long long cntB[MAX_N];

long long countB(int n, long long k) {
	if (k == 0) return 0;
	if (n == 0) return 0;
	if (n == 1) return (k >= 1) ? 1 : 0;
	if (k <= len[n- 1]) {
		return countB(n - 1, k);
	}
	else {
		return cntB[n - 1] + countB(n - 2, k - len[n - 1]);
	}
}

int main() {
	int t; cin >> t;
	len[0] = 1; len[1] = 1;
	cntB[0] = 0; cntB[1] = 1;
	for (int i=2; i<MAX_N; i++) {
		len[i] = len[i - 1] + len[i - 2];
		cntB[i] = cntB[i -1] + cntB[i - 2];
	}
	while (t--) {
		int n;
		long long k;
		cin >> n >> k;
		cout << countB(n, k) << "\n";
	}
	return 0;	
}