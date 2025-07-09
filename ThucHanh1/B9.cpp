/*
Cho dãy số nguyên dương A[] có n phần tử. Và số k là một trong các ước số của n.

Hãy tính giá trị nhỏ nhất có thể của biểu thức

wGabFrCaMcT1AAAAABJRU5ErkJggg==

khi ta sắp đặt lại các giá trị trong dãy A[].

Input

Dòng đầu ghi hai số n và k (0 < k ≤ n ≤ 105), trong đó k là ước số của n.

Dòng thứ 2 ghi n số nguyên dương của dãy A [] (1 ≤ A[i] ≤ 109)

Output

Ghi ra giá trị nhỏ nhất tìm được.

Ví dụ

Input
6 3
5 2 7 1 10 3

Output
6

Giải thích ví dụ: ta có thể sắp đặt lại dãy thành [10, 1, 3, 7, 2, 5]
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0; i<n; ++i) 
		cin >> a[i];
	
	sort(a.begin(), a.end());
	
	vector<int> b(n);
	int idx = 0;
	for (int i=0; i< k; i++) {
		for (int j = i; j < n; j+=k) {
			b[j] = a[idx++];
		}
	}
	
	long long res = 0;
	for (int i=0; i + k < n; i++) {
		res += abs(b[i] - b[i + k]);
	}
	cout << res << endl;
	
	
	return 0;
}