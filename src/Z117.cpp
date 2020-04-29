#include <cstdio>
int main () {
	double a;
	double b;
	double c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	c = a/10*20+b/10*80;
	if (c>=850 && a>=80 && b>=80){
		printf("Excellent\n");
	}
	else if (c>=800){
		printf("Very Good\n");
	}
	else if (c>=750){
		printf("Good\n");
	}
	else if (c>=700){
		printf("Fair\n");
	}
	else {
		printf("Satisfactory\n");
	}
	return 0;
}

