#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a < 0) {
		cout << "-";
		a *= -1;
	}
	int power = 0;
	for (int i = -10; pow(2, i) <= a; i++) {
		power = i;
	}
	if (power <= -2) {
		cout << "0.";
		for (int i = 2; i <= -1 * power; i++) printf("0");
	}
	if (power == -1) printf("0");
	for (int i = power; a > 0 || i >= 0; i--) {
		if (i == -1) printf(".");
		if (a >= pow(2, i)) {
			cout << "1";
			a -= pow(2, i);
		}
		else {
			cout << "0";
		}
	}
	cout << endl;
	return 0;
}
