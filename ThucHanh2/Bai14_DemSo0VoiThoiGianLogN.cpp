/*
Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước các số 1. 
Hãy đếm các số 0 với thời gian log(N).

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số N; 
dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤1000; 0≤ A[i]≤1.
Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
3
12
0 0 0 0 0 0 0 0 0 1 1 1 
5
0 0 0 0 0
6
1 1 1 1 1 1

Output
9
5
0
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >>n;
		int cnt = 0;
		for (int i=0; i<n; i++) {
			int x; cin >> x;
			if (x == 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	
	return 0;
}