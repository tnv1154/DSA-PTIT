/*
Cho dãy số nguyên A[] có N phần tử. Một dãy số được coi là đẹp nếu trong dãy không có bất cứ cặp số cạnh nhau nào bằng nhau (tức là A[i] # A[i+1] với mọi chỉ số i từ 0 đến N-2).

Giả sử chi phí để thay đổi giá trị A[i] tăng hoặc giảm 1 đơn vị là B[i].

Hãy tính chi phí nhỏ nhất để biến đổi dãy số A[] ban đầu về dạng thỏa mãn tính chất “đẹp”.

Input

Dòng đầu ghi số bộ test T (1 < T ≤ 3*105).

Mỗi bộ test bắt đầu với số nguyên dương N (1 < N ≤ 3*105).

Tiếp theo là N dòng, mỗi dòng ghi 2 số A[i] và B[i]. Các giá trị đều nguyên dương và không quá 9 chữ số.

Dữ liệu vào đảm bảo kết quả tính được của mỗi test đều không quá 18 chữ số.

Output

Với mỗi bộ test, ghi ra chi phí nhỏ nhất có thể trên một dòng.

Ví dụ

Input
3
3
2 4
2 1
3 5
3
2 3
2 10
2 6
4
1 7
3 3
2 6
1000000000 2

Output
2
9
0

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> a(n), b(n);
		for (int i=0; i<n; i++) {
			cin >> a[i] >> b[i];
		}
		vector<long long> prev(3, 0), curr(3, 0);
		for (int j=0; j<=2; j++) {
			prev[j] = j * b[0];
		}
		for (int i=1; i<n; i++) {
			for (int j=0; j <= 2; j++) {
				curr[j] = 1e18;
				for (int k=0; k<=2; k++) {
					if (a[i] + j != a[i-1] + k) {
						curr[j] = min(curr[j], prev[k] + j * b[i]);
					}
				}
			}
			prev = curr;
		}
		cout << min({prev[0], prev[1], prev[2]}) << "\n";
		
		
	}
	
	return 0;
}