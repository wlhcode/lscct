#include <cstdio>
int main () {
	int n;
	char k;
	scanf("%d %c", &n, &k);
	if (n == 1) {
	  printf("%c%c \n", k, k);
	  printf("%c/ \n", k);
	  printf(" / \n");
    }
	else if (n == 2) {
	  printf("%c%c%c\n", k, k, k);
	  printf(" / \n");
	  printf(" / \n");
	}
	else if (n == 3) {
	  printf(" %c \n", k);
	  printf(" / \n");
	  printf(" / \n");
	}
	else if (n == 4) {
	  printf("%c%c \n", k, k);
	  printf(" / \n");
	  printf(" / \n");
	}
	else if (n == 5) {
	  printf(" %c \n", k, k);
	  printf(" %c \n", k);
	  printf(" / \n");
	}
	return 0;
}
