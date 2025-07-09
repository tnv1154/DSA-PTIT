/*
Ngày lễ Valentine, Nam mang hộp socola đến nhà bạn gái để tặng nhưng bạn gái từ chối. Nam đành phải mang về ăn dần. Giả sử socola dạng thanh và rất đắng nên mỗi lần Nam chỉ ăn một nửa cái. Nếu lấy ra một thanh nguyên vẹn thì Nam bẻ đôi thanh socola đó rồi ăn một nửa, một nửa còn lại bỏ vào trong hộp. Nếu lấy ra là một nửa thanh thì Nam sẽ ăn ngay.

Giả sử nếu lấy ra một thanh nguyên vẹn thì Nam viết ra chữ D (devide), còn nếu lấy ra một nửa thì Nam viết chữ C (conquer). Hỏi Nam có tất cả bao nhiêu cách để ăn hết hộp có N thanh socola. Tức là có bao nhiêu xâu ký tự khác nhau được tạo ra.

Input

Dòng đầu ghi số bộ test, mỗi test ghi một số nguyên N là số thanh socola trong hộp (không quá 30).

Ouput

Mỗi test ghi ra số cách khác nhau giúp Nam ăn hết hộp socola đó.

Ví dụ

Input
6
6
1
4
2
3
30

Output
132
1
14
2
5
3814986502092304

*/

#include<bits/stdc++.h>
using namespace std;

long long c(int n, int k) {
	long long res = 1;
	for (int i=1; i<=k; i++) {
		res =  res *(n - i + 1)/ i;
	}
	return res;
}

long long catalan(int n) {
	return c(2 * n, n) / (n + 1);
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << catalan(n) << endl;
	}
	return 0;
}