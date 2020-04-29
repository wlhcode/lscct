#include "bits/stdc++.h"
using namespace std;
bool a[105][105];
int n,m;
void t(int x,int y,int dx,int dy){
    if(x<0||y<0||x>=n||y>=n) return;
    a[x][y]=1;
    t(x+dx,y+dy,dx,dy);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) a[j][i]=0;
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        t(x,y,1,0);
        t(x,y,1,-1);
        t(x,y,0,-1);
        t(x,y,-1,-1);
        t(x,y,-1,0);
        t(x,y,-1,1);
        t(x,y,0,1);
        t(x,y,1,1);
    }
    int q=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]==0) q++;
        }
    }
    cout<<q<<endl;
    return 0;
}
