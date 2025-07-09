/*
Cho dãy các số nguyên dương A[] có N phần tử, trong đó các phần tử khác nhau từng đôi một. Với số nguyên dương K < N, hãy liệt kê các dãy con có đúng K phần tử của A[] theo quy tắc sau:

Mỗi dãy con được hiển thị theo thứ tự tăng dần từ trái qua phải
Các dãy con được liệt kê lần lượt theo thứ tự từ điển tăng dần (nếu coi cả dãy con là một xâu ký tự).
Input

Dòng đầu ghi 2 số N và K ( 1 < K < N < 20)

Dòng thứ 2 ghi N số nguyên dương A[i], các giá trị đảm bảo nguyên dương, khác nhau từng đôi một và nhỏ hơn 100.

Output

Ghi ra lần lượt các dãy con K phần tử của A[] theo quy tắc trong đề bài. 

Ví dụ

Input
3 2
3 2 4

Output
2 3
2 4
3 4

*/
#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<vector<int>> res;
vector<int> combination;


void generate(int start, int cnt) {
	if (cnt == k) {
		res.push_back(combination);
		return;
	}
	for (int i=start; i<n; i++) {
		combination.push_back(a[i]);
		generate(i + 1, cnt + 1);
		combination.pop_back();
	}
}

int main() {
	cin >> n >> k;
	a.resize(n);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	generate(0, 0);
	vector<string> listStrings;
	for (auto v:res) {
		ostringstream oss;
		for (int i=0; i<v.size();i++) {
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