/*
Cho mảng A[] gồm N phần tử. Nhiệm vụ của bạn là tìm tổng của tất cả các phần tử lớn nhất của mỗi dãy con liên tục. Ví dụ với mảng A[] = {1, 3, 1, 7} ta có kết quả là 42 bằng cách thực hiện như sau:
Phần tử lớn nhất của dãy con {1}: 1
Phần tử lớn nhất của dãy con {1, 3}: 3
Phần tử lớn nhất của dãy con {1, 3, 1}: 3
Phần tử lớn nhất của dãy con {1, 3, 1, 7}: 7
Phần tử lớn nhất của dãy con {3}: 3
Phần tử lớn nhất của dãy con {3, 1}: 3
Phần tử lớn nhất của dãy con {3, 1, 7}: 7
Phần tử lớn nhất của dãy con {1}: 1
Phần tử lớn nhất của dãy con {1, 7}: 7
Phần tử lớn nhất của dãy con { 7}: 7
Kết quả: 1+3+3+7+3+3+7+1+7+7=42

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số phần tử của mảng N; phần thứ hai đưa vào N phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤106; 1≤A[i]≤1000.
Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
1
4
1 3 1 7

Output
42

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin>> n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin >> a[i];
		vector<int> left(n) , right(n);
		stack<int> st;
		for (int i=0; i<n; i++) {
			while(!st.empty() &&  a[st.top()] < a[i])
				st.pop();
			if (st.empty())
				left[i] = i + 1;
			else 
				left[i] = i - st.top();
			st.push(i);
		}
		
		while(!st.empty())
			st.pop();
		for (int i=n - 1; i>=0; i--) {
			while (!st.empty() && a[st.top()] <= a[i])
				st.pop();
			if (st.empty()) 
				right[i] = n - i;
			else 
				right[i] = st.top() - i;
			st.push(i);
		}
		long long res = 0;
		for (int i=0; i<n; i++) {
			res += (long long)a[i]*left[i]*right[i];
		}
		cout << res << endl;
		
	}	
	return 0;
}