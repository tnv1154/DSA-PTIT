#include<bits/stdc++.h>
using namespace std;

int n;
int X[100];
bool final = false;

void khoiTao() {
	for (int i = 1; i <= n; i++) {
		X[i] = 0;
	}
}

void display() {
	for (int i = 1; i <= n; i++) {
		cout << X[i] << " ";
	}
	cout << endl;
}

bool check() {
	for (int i = 1; i<=n; i++){
		if (X[i] != X[n - i + 1]) 
			return false;
	}
	return true;
}

void nextGen() {
	int i = n;
	while (i > 0 && X[i]!=0) {
		X[i] = 0;
		i--;
	}
	if (i == 0) 
		final = true;
	else
		X[i] = 1;

}

int main()	{
	
	cin >> n;
	while (!final) {
		if (check()) {
			display();
		}
		nextGen();
	}


	return 0;
}
