#include<cstdio>
#include<cmath>
#define ll long long
int main(){
    ll a,f=2;
    ll sum=0;
    scanf("%lld",&a);
    while(a!=1){
        while(a/f*f==a){
            sum+=f;
            a=a/f;
        } if(f%2==1) f++;
        f++;
    } printf("%d\n",sum);
    return 0;
}
