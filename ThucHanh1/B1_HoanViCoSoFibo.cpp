/*
Hãy liệt kê các hoán vị của N số nguyên dương đầu tiên và có thứ tự là một số trong dãy Fibonacci.

Input

Chỉ có 1 dòng ghi số N (2 < N < 10).

Output

Ghi ra các hoán vị có thứ tự là các số trong dãy Fibonacci. Xem ví dụ để hiểu rõ hơn cách ghi kết quả.

Ví dụ

Input
4

Output
1: 1 2 3 4

2: 1 2 4 3

3: 1 3 2 4

5: 1 4 2 3

8: 2 1 4 3

13: 3 1 2 4

21: 4 2 1 3
*/
#include<bits/stdc++.h>
using namespace std;

int n, x[10001];
bool final = false;
int cnt = 1;
long long f[100];
set<int> se;

void fibo() {
	f[0] = 0;
	f[1] = 1;
	se.insert(1);
	for (int i=2; i<= 93; i++) {
		f[i] = f[i-1] + f[i-2];
		se.insert(f[i]);
	}
}

void khoiTao() {
	for (int i=1; i<=n; i++) {
		x[i] = i;
	}
}

void display() {
	cout << cnt <<": ";
	for (int i=1; i<=n; i++) {
		cout << x[i] <<" ";
	}
	cout << endl;
}

bool check() {
	if (se.find(cnt) != se.end())
		return true;
	return false;
}

void nextGen() {
	int i = n - 1;
	while (i > 0 && x[i] > x[i + 1])
		i--;
	if (i == 0) 
		final = true;
	else {
		int j = n;
		while (x[i] > x[j]) 
			j--;
		swap(x[i], x[j]);
		reverse(x + i + 1, x + n + 1);
	}
}

int main() {
	cin >> n;
	fibo();
	khoiTao();
	while (!final) {
		if (check()) {
			display();
		}
		cnt++;
		nextGen();
	}
	return 0;
}