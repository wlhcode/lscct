#include<cstdio>
long long arr[101];
int main(){
	long long a;
	scanf("%lld",&a);
	for(long long i=0;i<a;i++) scanf("%lld",&arr[i]);
	long long sum=0;
	for(long long i=0;i<a;i++){
		sum+=arr[i];
		if(sum<0) printf("Negative\n");
		if(sum>0) printf("Positive\n");
		if(sum==0) printf("\n");
	}
	return 0;
	
}
