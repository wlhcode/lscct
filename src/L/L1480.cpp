#include<cstdio>
int main(){
    int a;
    scanf("%d",&a);
    int n=a*a;
    int tmp;
    for(int clm=1;clm<=a;clm++){
        for(int cout=clm;cout<=clm+(a-1)*a;cout+=a){
            printf("%d",cout*a);
            if(cout!=clm+(a-1)*a) printf(" ");
        }
        printf("\n");
    }
}

