#include <bits/stdc++.h>
using namespace std;
int main () {
	string s; cin >> s;
	unsigned long long n = 0;
	int k = 0, z;
	for (char c : s) {
		if (c != '!') n = n * 10 + c - '0';
		else ++k;
	}
	z = n - k;
	while (z > 0) {
		n = (n * z) % 1000000007;
		z -= k;
	}
	cout << n << endl;
}
