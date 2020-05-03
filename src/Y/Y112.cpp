#include<bits/stdc++.h>
using namespace std;
int arr[55][25];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<53;i++){
        for(int j=0;j<23;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        int x,y,s;
        cin>>x>>y>>s;
        for(int x1=max(1,x-s+1);x1<=min(50,x+s-1);x1++){
            arr[x1][y]=max(arr[x1][y],1000*s+10*i+1);
        }
        for(int y1=max(1,y-s+1);y1<=min(20,y+s-1);y1++){
            arr[x][y1]=max(arr[x][y1],1000*s+10*i+2);
        }
        arr[x][y]=max(arr[x][y],1000*s+10*i+3);
    }
    for(int y2=1;y2<=20;y2++){
        for(int x2=1;x2<=50;x2++){
            if(arr[x2][y2]%10==1) cout<<'-';
            else if(arr[x2][y2]%10==2) cout<<'|';
            else if(arr[x2][y2]%10==3) cout<<'+';
            else cout<<' ';
        }
        cout<<endl;
    }
}
