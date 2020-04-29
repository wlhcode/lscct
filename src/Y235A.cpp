#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int n;
int odd(){
    int x=(n+1)/2,y=1,nextup=1;
    while(nextup<=n*n){
        arr[x][y]=nextup;
        int tmpx=x,tmpy=y;
        x++;
        y--;
        if(x>n) x=1;
        if(y<1) y=n;
        if(arr[x][y]!=0){
            x=tmpx;
            y=tmpy+1;
        }
        if(y>n) y=1;
        nextup++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[j][i];
            if(j+1>n) cout<<endl;
            else cout<<" ";
        }
    }
}
int even(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) arr[j][i]=n*(i-1)+j;
    }
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n;j++){
            if(i%4<=1&&j%4<=1) continue;
            if(i%4>=2&&j%4>=2) continue;
            swap(arr[j][i],arr[n-j+1][n-i+1]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[j][i];
            if(j+1>n) cout<<endl;
            else cout<<" ";
        }
    }
}
int main(){
    cin>>n;
    if(n%2==1) odd();
    else even();
}
