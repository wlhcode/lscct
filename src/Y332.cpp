#include<cstdio>
using namespace std;
int main(){
    int a,b,tmp=2;
    scanf("%d %d",&a,&b);
    int max,min;
    if(a>=b){
        max=a;
        min=b;
    }else if(a<b){
        max=b;
        min=a;
    }int lcm=max;
    while(lcm%min!=0){
        lcm=max*tmp;
        tmp++;
    } int hcf;
    if(a!=b) hcf=max-min;
    if(a==b) hcf=min;
    tmp=2;
    while(max%hcf!=0){
        hcf=min/tmp;
        tmp++;
    }printf("%d\n%d\n",lcm,hcf);
    return 0;
}
