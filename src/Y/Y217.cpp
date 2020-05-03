#include<cstdio>
int main(){
    int a,tmp=1;
    scanf("%d",&a);
    for(int row=1;row<=a;row++){
        for(int i=1;i<row;i++){
            printf("%d * ",i);
        } printf("%d = ",row);
        for(int j=1;j<=row;j++){
            tmp*=j;
        } printf("%d\n",tmp);
        tmp=1;
    } return 0;
}
