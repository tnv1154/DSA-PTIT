/*
Trong các công ty IT, lập trình viên là một loại nhân sự đặc biệt. Nếu trả mức lương quá thấp, anh ta sẽ không muốn làm việc, năng suất sẽ thấp, thậm chí thỉnh thoảng lại dọa bỏ đi nơi khác. Nếu trả mức lương quá cao thì anh ta lại lười biếng và chẳng muốn làm việc gì cả. Mức lương vừa đủ sẽ khiến động lực làm việc tăng cao và năng suất sẽ là cao nhất.

Giả sử có N lập trình viên, mỗi người có một ngưỡng trả lương từ A[i] đến B[i] gọi là vừa đủ. Nếu lương nhỏ hơn A[i] thì số dòng code đúng mỗi ngày của lập trình viên thứ i sẽ là X, nếu trong đoạn từ A[i] đến B[i] thì số dòng code sẽ là Y, còn nếu lớn hơn B[i] thì số dòng code sẽ là Z. Tất nhiên, Y>X và Y>Z.

Hãy giúp giám đốc công ty chọn ra mức lương nào đó chung cho cả N lập trình viên và tổng số dòng code đúng trong một ngày là lớn nhất có thể.

Input

Dòng 1 ghi 4 số N, X, Y, Z (1 <= N <=20000; 0 <= X,Y,Z <=1000)

N dòng tiếp theo, mỗi dòng ghi hai số A[i] và B[i] (0 <= A[i] <= B[i] <= 109)

Output

Ghi ra số dòng code đúng tối đa có thể đạt được.

Ví dụ

Input
4 7 9 6
5 8
3 4
13 20
7 10

Output
31
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	vector<pair<int, int>> ranges(n);
	set<int> candidate; //muc luong
	
	for (int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		ranges[i] = {a, b};
		candidate.insert(a);
		candidate.insert(b + 1);
	}
	int max_code = 0;
	for (int l : candidate) {
		int total = 0;
		for (int i=0; i<n; i++) {
			int a = ranges[i].first;
			int b = ranges[i].second;
			if (l < a)
				total += x;
			else if (l <= b)
				total += y;
			else 
				total += z;
		}
		max_code = max(max_code, total);
	}
	cout << max_code << endl;
	return 0;
}