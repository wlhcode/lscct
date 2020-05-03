#include <bits/stdc++.h>
using namespace std;
int arr[5][5];
bool stuck[5][5];

void rotate90(){
    int tmp[5][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) tmp[3-i][j]=arr[j][i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) arr[j][i]=tmp[j][i];
    }
}

void squash(int x,int y){
    if(x==0) return;
    if(arr[x-1][y]==0){
        arr[x-1][y]=arr[x][y];
        arr[x][y]=0;
        squash(x-1,y);
    }
    if(arr[x-1][y]==arr[x][y]&&stuck[x-1][y]==0){
        arr[x-1][y]*=2;
        stuck[x-1][y]=1;
        arr[x][y]=0;
        return;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) stuck[i][j]=0;
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) cin>>arr[j][i];
    }
    int dir;
    cin>>dir;
    for(int i=0;i<4-dir;i++) rotate90();
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) squash(i,j);
    }
    for(int i=0;i<dir;i++) rotate90();
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++) cout<<arr[j][i]<<" ";
        cout<<arr[3][i]<<endl;
    }
}
