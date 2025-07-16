/*
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng.
Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách 
không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại.
Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

Input: Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).
Output: In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được.
Ví dụ:
Test 1
Input:
11 25
Ouput:
36 37

Test 2
Input:
1430 4862
Ouput:
6282 6292

Test 3
Input:
16796 58786
Ouput:
74580 85582

*/
#include<bits/stdc++.h>
using namespace std;

int LonNhat(int a, int b) {
	string x = to_string(a);
	string y = to_string(b);
	for (int i=0; i<x.length(); i++) {
		if (x[i] == '5')
			x[i] = '6';
	}
	for (int i=0; i<y.length(); i++) {
		if (y[i] == '5')
			y[i] = '6';
	}
	a = stoi(x);
	b = stoi(y);
	return a + b;
}

int NhoNhat(int a, int b) {
	string x = to_string(a);
	string y = to_string(b);
	for (int i=0; i<x.length(); i++) {
		if (x[i] == '6')
			x[i] = '5';
	}
	for (int i=0; i<y.length(); i++) {
		if (y[i] == '6')
			y[i] = '5';
	}
	a = stoi(x);
	b = stoi(y);
	return a + b;
}

int main() {
	int a, b; 
	cin >> a >> b;
	cout << NhoNhat(a, b) <<" "<< LonNhat(a, b);
	
	return 0;
}