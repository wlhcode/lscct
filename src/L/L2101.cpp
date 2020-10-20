#include <bits/stdc++.h>
using namespace std;
vector <bool> v;
string str;

int parent (int ind, bool s) {
	if (str[ind+1] >= '0' && str[ind+1] <= '9') {
		v.push_back(s);
		ind += 2;
	}
	for (; str[ind] != ')'; ++ind) {
		if (str[ind] == '+' || str[ind] == '-') {
			bool sq;
			if (str[ind] == '+') sq = 0;
			else sq = 1;
			if (str[ind+1] != '(') v.push_back(s ^ sq);
			else ind = parent(ind+1, s ^ sq);
		}
	}
	return ind;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> str;
	if (str[0] >= '0' && str[0] <= '9') v.push_back(0);
	for (int i = 1; i < str.length(); ++i) {
		if (str[i] == '+' || str[i] == '-') {
			bool s;
			if (str[i] == '+') s = 0;
			else s = 1;
			if (str[i+1] != '(') v.push_back(s);
			else i = parent(i+1, s);
		}
	}
	int cnt = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (cnt != 0 || v[cnt] == 1) {
				if (v[cnt]) cout << '-';
				else cout << '+'; 
			}
			for (; i < str.length() && str[i] >= '0' && str[i] <= '9'; ++i)
				cout << str[i];
			++cnt;
		}
	}
	cout << endl;
}
