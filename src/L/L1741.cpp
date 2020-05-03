#include <cstdio>
using namespace std;
int main () {
	int v;
	scanf("%d", &v);
	int jr = v % (1000);
	int ir = jr % (500);
	int hr = ir % (200);
	int gr = hr % (100);
	int fr = gr % (50);
	int er = fr % (20);
	int dr = er % (10);
	int cr = dr % (5);
	int br = cr % (2);
	int j = v / 1000;
	int i = jr / 500;
	int h = ir / 200;
	int g = hr / 100;
	int f = gr / 50;
	int e = fr / 20;
	int d = er / 10;
	int c = dr / 5;
	int b = cr / 2;
	int a = br;
	printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
	return 0;
}
