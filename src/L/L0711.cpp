#include <cstdio>
using namespace std;
int main() {
	char a;
	scanf("%c", &a);
	if (a <= 57 && a >= 48) {printf("Number!\n");}
	else if (a <= 90 && a >= 65) {printf("Capital letter!\n");}
	else if (a <= 122 && a >= 97) {printf("Small letter!\n");}
	else {printf("Wrong answer!\n");}
	return 0;
}
