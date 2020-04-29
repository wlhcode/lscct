#include <cstdio>
using namespace std;
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (b <= a) printf("Congratulations, you are within the speed limit!\n");
	if (b - a >= 1) {
		if (b - a <= 20) {
			printf("You are speeding and your fine is $100.\n");
		} else if (b - a <= 30) {
			printf("You are speeding and your fine is $270.\n");
		} else {
			printf("You are speeding and your fine is $500.\n");
		} 
	}
	return 0;
}
