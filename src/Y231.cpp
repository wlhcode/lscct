#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int main(){
    int n;
    scanf("%d",&n);
    int number=1;
    for(int i=1;i<=10;i++){
        if(i%2==0){
            for(int j=1;j<=i;j++){
                a[i][j]=number;
                number++;
            }
            number--;
            for(int j=i;j>=1;j--){
                a[j][i]=number;
                number++;
            }
        }
        else{
            for(int j=1;j<=i;j++){
                a[j][i]=number;
                number++;
            }
            number--;
            for(int j=i;j>=1;j--){
                a[i][j]=number;
                number++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[j][i];
            if(j<n) cout<<" ";
            else cout<<endl;
        }
    }
}
