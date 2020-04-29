#include <cstdio>
int main () {
	char k;
	scanf("%c", &k);
	if (k >= 'A' and k <= 'Z') printf("%c\n", k);
	else printf("%c\n", k - ('a' - 'A')) ;
	return 0;
}
