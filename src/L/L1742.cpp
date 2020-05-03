#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int N;
	scanf("%d", &N);
	int fraction=0;
	if (N-(N/11)*11==0)
	  fraction++;
	int sqroot=sqrt(N+1);
	if (N==sqroot*sqroot-1)
	  fraction++;
	int frac=N/7;
	if (N==frac*7)
	  fraction++;
	double n=N;
	if ((n+1)/9-(N+1)/9==0)
	  fraction++;
	if (fraction == 0)
	  printf("0\n");
	if (fraction == 1)
	  printf("0.25\n");
	if (fraction == 2)
	  printf("0.5\n");
	if (fraction == 3)
	  printf("0.75\n");
	if (fraction == 4)
	  printf("1\n");
	return 0;	
}
