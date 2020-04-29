#include <cstdio>
using namespace std;
int main(){
	int a, b, c; 
	int d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	if (b > e)
	  printf("%d\n", (d - a - 1));
	else if (b < e)
	  printf("%d\n", (d - a));
	else if (b = e && c <= f)
	  printf("%d\n", (d - a));
	else if (b = e && c > f)
	  printf("%d\n", (d - a - 1));
	return 0;
}
