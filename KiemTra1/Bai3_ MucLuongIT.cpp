#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	
	vector<pair<int, int>> v;
	for (int i=0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	
	set<int> se;
	for (auto p : v) {
		se.insert(p.first);
		se.insert(p.second + 1);
	}
	
	int MaxCode = 0;
	for (auto m : se) {
		int sum = 0;
		for (int i=0; i<n; i++) {
			int start = v[i].first;
			int end = v[i].second;
			if (m < start) {
				sum += x;
			}
			else if (m <= end) {
				sum += y;
			} 
			else 
				sum += z;
		}
		MaxCode = max(MaxCode, sum);
	}
	cout << MaxCode;
	return 0;
}