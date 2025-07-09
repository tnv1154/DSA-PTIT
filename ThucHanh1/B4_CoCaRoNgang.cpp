/*
Ai cũng đã biết trò chơi caro với hai ký hiệu X và O. Hai người chơi lần lượt viết ký hiệu của mình lên trên lưới các ô vuông. Một bên được gọi là thắng cuộc nếu có 5 ký hiệu của mình xếp thành một đường thẳng (ngang, dọc, chéo).

Phiên bản caro ngang đơn giản hơn nhiều. Trò chơi chỉ thực hiện trên một đường thẳng với không quá N ô vuông. Luật chơi thay đổi một chút để cho mỗi người chơi có thể “tranh nhau” viết càng nhanh càng tốt ký hiệu của mình, không cần chờ đến lượt.

Khi kết thúc một ván chơi thì tất cả N ô vuông đều đã được điền O hoặc X. Người chơi thắng cuộc khi có dãy ký hiệu giống nhau liên tiếp dài hơn người kia và đảm bảo lớn hơn hoặc bằng 5. Nếu hai người chơi đều có dãy liên tiếp dài nhất bằng nhau thì coi như “hòa”.

Cho số N là số ô vuông thẳng hàng cùng với ký hiệu được lựa chọn. Hãy liệt kê tất cả các trường hợp giúp người chơi có ký hiệu đó thắng cuộc. Các trường hợp cần liệt kê theo thứ tự từ điển.

Input

Dòng đầu ghi số bộ test T (T < 10).

Mỗi bộ test viết trên một dòng số N và ký hiệu c (5 < N < 16; c = ‘O’ hoặc c = ‘X’).

Output

Ghi ra tất cả các trường hợp giúp người chơi có ký hiệu là chữ cái c trong dữ liệu vào thắng cuộc. Các chữ cái đều viết hoa, mỗi trường hợp thắng cuộc ghi trên một dòng.

Ví dụ
Input

1
6 X

Output
OXXXXX
XXXXXO
XXXXXX
*/
#include<bits/stdc++.h>
using namespace std;

char c, dc;
string s;
int n, MAX;

bool check(vector<int> &v) {
	s = "";
	int cnt0 = 0, cnt1 = 0;
	int max1 = 0, max0 = 0;
	for (int &i : v) {
		if (i) {
			s += c;
			max0 = max(max0, cnt0);
			cnt0 = 0;
			++cnt1;
		}
		else {
			s += dc;
			max1 = max(max1, cnt1);
			cnt1 = 0;
			++cnt0;
		}
	}	
	max0 = max(max0, cnt0);
	max1 = max(max1, cnt1);
	return (max1 > max0 and max1 >= 5);
}

int main() {
	int  t;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		if (c == 'X')
			dc = 'O';
		else 
			dc = 'X';
		int MAX = 1 << n;
		vector<vector<int>> v;
		for (int i=31; i<MAX; ++i) {
			vector<int> tmp;
			for (int j = n - 1; ~j; --j) {
				tmp.push_back((i >> j) & 1);
			}
			v.push_back(tmp);
		}
		vector<string> vs;
		for (vector<int> &i : v) {
			if (check(i)) 
				vs.push_back(s);
		}
		sort(vs.begin(), vs.end());
		for (string &i : vs) {
			cout << i << endl;
		}
	}

	return 0;
}