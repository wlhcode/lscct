#include<cstdio>
int main(){
    int a;
    scanf("%d",&a);
    int n=a*a;
    int tmp;
    for(int clm=a;clm>=1;clm--){
        for(int cout=(clm-1)*a+1;cout<=clm*a;cout++){
            printf("%d",cout);
            if(cout!=clm*a) printf(" ");
        }
        printf("\n");
    }
}
