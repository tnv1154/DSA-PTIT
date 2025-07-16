/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[].
Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất.
Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây (A[i] + A[j]) % BASE.
Dữ liệu vào
Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm 2 dòng.
Dòng đầu tiên là số nguyên N (N ≤ 2*106).
Dòng tiếp theo gồm N số nguyên dương c[i] (1 ≤ A[i] ≤ 109).

Kết quả 
In ra đáp án của bộ test trên từng dòng, theo modulo BASE = 109+7.
Ví dụ:
Input:
1
7
2 4 1 2 10 2 3

Output:
59
*/
#include<bits/stdc++.h>
using namespace std;

long long base = 1000000007;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		priority_queue<long long, vector<long long>, greater<long long>> qp;
		for (int i=0; i<n; i++) {
			int x; cin >> x;
			qp.push(x);
		} 
		long long sum = 0;
		while(qp.size() > 1) {
			long long x = qp.top();
			qp.pop();
			long long y = qp.top();
			qp.pop();
			sum = (sum + (x + y) % base) % base;
			qp.push((x + y) % base);
		}	
		cout << sum << endl;
		
	}	
	
	return 0;
}