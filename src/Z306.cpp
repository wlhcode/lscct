#include<bits/stdc++.h>
using namespace std;
#define ll long long
char bitch[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> bitch;
	int string = strlen(bitch);
	if (string == 1) {
		cout << "Yes" << endl;
		return 0;
	}
	for (int i = 0; i < string / 2; i++){
		if (bitch[i] != bitch[string - 1 - i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}

