/*
Bạn được giao cho N công việc, công việc thứ i có thời gian bắt đầu là A[i] và kết thúc tại B[i].
Tại một thời điểm, bạn chỉ có thể làm một công việc.
Bạn hãy lựa chọn các công việc một cách tối ưu sao cho số công việc làm được là nhiều nhất.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).
N dòng tiếp theo, mỗi dòng gồm 2 số A[i] và B[i] (0 ≤ A[i] < B[i] ≤ 106).

Output:Với mỗi test, in ra đáp án trên một dòng,là số công việc nhiều nhất có thể được thực hiện.

Ví dụ:
Input
1
6
5 9
1 2
3 4
0 6
5 7
8 9
 
Output
4

Giải thích test: Lựa chọn công việc 2, 3, 5, 6.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {	
		int n; cin >> n;
		vector<pair<long long, long>> v(n);
		for (int i=0; i<n; i++) {
			long long x, y; cin >> x >> y;
			v[i].second = x;
			v[i].first = y;
		}
		sort(v.begin(), v.end());
		int cnt = 1;
		long long tmp = v[0].first;
		for (int i=1; i<n; i++) {
			if (v[i].second >= tmp) {
				tmp = v[i].first;
				cnt++;
			}
		}
		cout << cnt <<  endl;
	}

	
	return 0;
}