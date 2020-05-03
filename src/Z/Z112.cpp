#include <cstdio>
int main() {
	int h;
	scanf("%d", &h);
	if (h == 0) // midnight
	  printf("12 AM\n");
	else if (h < 12) // 1 - 11
	  printf("%d AM\n", h);
	else if (h == 12) // noon
	  printf("12 PM\n");
	else // 13 - 23
	  printf("%d PM\n", h-12);
	return 0;
}
