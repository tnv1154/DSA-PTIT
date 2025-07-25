/*
Cho dãy số A[] gồm có N phần tử và số nguyên K.

Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 1 ≤ K ≤ N).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).

Output: 

Với mỗi test, in ra trên một dòng N-K+1 số nguyên là đáp án tìm được.

Ví dụ:

Input

2
9 3
1 2 3 1 4 5 2 3 6

10 4
8 5 10 7 9 4 15 12 90 13

Output
3 3 4 5 5 5 6
10 10 10 15 15 90 90

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		deque<int> dp;
		for (int i=0; i<n; i++) {
			if (!dp.empty() && dp.front() <= i - k)
				dp.pop_front();
			while (!dp.empty() && a[dp.back()] <= a[i])
				dp.pop_back();
			dp.push_back(i);
			if (i >= k - 1) {
				cout << a[dp.front()];
				if (i != n - 1)
					cout << " ";
			}
		}
		cout << endl;
		
	}
	return 0;
}