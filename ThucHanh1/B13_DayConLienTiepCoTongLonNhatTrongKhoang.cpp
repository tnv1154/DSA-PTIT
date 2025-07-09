/*
Cho dãy số A[] có N phần tử. Hãy tìm dãy con liên tiếp có tổng lớn nhất mà độ dài của dãy số nằm trong phạm vi [U, V] cho trước.

Input:
Dòng đầu tiên gồm 3 số nguyên N, U, V (1 ≤ U ≤ V ≤ N).
Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).
Giới hạn:
N ≤ 200000.

Output: 
In ra một số nguyên là giá trị tổng lớn nhất tìm được.

Ví dụ:
Input
8 1 2
-1 3 -3 6 3 -5 2 2
Output
9

Input
5 1 2
1 -2 3 -4 5
Output
5

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, u, v;
	cin >> n >> u >> v;
	vector<long long> a(n+1), prefix(n + 1, 0);
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		prefix[i] = prefix[i - 1] + a[i];
	}
	multiset<long long> se;
	long long result = LLONG_MIN;
	for (int i = u; i <=n ; i++) {
		if (i - v - 1 >= 0) {
			se.erase(se.find(prefix[i - v -1]));
			
		}
		se.insert(prefix[i - u]);
		result = max(result, prefix[i] - *se.begin());
	}
	cout << result;
	
	return 0;
}