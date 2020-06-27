#include <bits/stdc++.h>
using namespace std;
vector <int> v;

int find (int a) {
	if (a == 0) return INT_MAX;
	for (int i = v.size() - 1; i >= 0; --i) {
		if (a == v[i]) return i;
	}
	return -1;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b; cin >> a >> b;
	cout << a / b;
	a %= b;
	if (a != 0) {
		cout << ".";
		string s;
		int fa;
		do {
			v.push_back(a);
			a *= 10;
			s += to_string(a / b);
			a %= b;
			fa = find(a);
		} while (fa == -1);
		if (fa == INT_MAX) cout << s;
		else {
			for (int i = 0; i < fa; ++i) cout << s[i];
			cout << "[";
			for (int i = fa; i < s.length(); ++i) cout << s[i];
			cout << "]";
		}
	}
	cout << endl;
}
