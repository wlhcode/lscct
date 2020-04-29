#include <cstdio>
using namespace std;
int main(){
	int u, v, t;
	scanf("%d %d %d", &u, &v, &t);
	double b = u;
	double c = v;
	double d = t;
	double a = (c - b) / d;
	printf("%.3lf\n", a);
	return 0;
}
