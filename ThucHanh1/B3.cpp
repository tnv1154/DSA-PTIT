/*
Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần.

Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu.

Coi mỗi dãy con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự tử điển.

Input

Dòng đầu ghi số n (không quá 20)
Dòng thứ 2 ghi n số của dãy a[]. Các số khác nhau từng đôi một và có giá trị không quá 100.
Output

Ghi ra lần lượt các dãy con tăng dần theo thứ tự từ điển.

Ví dụ
Input
4
6 3 7 11

Output
3 11
3 7
3 7 11
6 11
6 7
6 7 11
7 11
*/

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<vector<int>> res;
vector<int> curr;

void Try(int index) {
	for (int i = index; i<n; i++) {
		if (curr.empty() || a[i] > curr.back()) {
			curr.push_back(a[i]);
			if (curr.size() >= 2) {
				res.push_back(curr);
			}
			Try(i + 1);
			curr.pop_back();
		}
	}
}

int main() {
	cin >> n;
	a.resize(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	Try(0);
	vector<string> listStrings;
	for (auto v : res) {
		ostringstream oss;
		for (int i = 0; i < v.size(); i++) {
			if (i > 0) 
				oss << " ";
			oss << v[i];
		}
		listStrings.push_back(oss.str());
		
	}
	sort(listStrings.begin(), listStrings.end());
	for (string s: listStrings)
		cout << s << endl;
	return 0;
}