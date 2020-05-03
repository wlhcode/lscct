#include<cstdio>
int main(){
    int a,k=1;
    scanf("%d",&a);
    for(int j=1;j<=a;j++){
        for(int i=1;i<=j;i++){
            if(i<j) printf("%d ",k);
            if(i==j) printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
