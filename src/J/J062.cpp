#include "bits/stdc++.h"
using namespace std;
bool a[105][105];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<102;i++){
        for(int j=0;j<102;j++){
            if(i==1) a[1][j]=1;
            else a[i][j]=0;
        }
    }
    for(int i=0;i<k;i++){
        int from,to,p;
        cin>>from>>to>>p;
        for(int j=0;j<p;j++){
            int t;
            cin>>t;
            if(a[from][t]) a[to][t]=1;
        }
    }
    for(int i=1;i<=m;i++){
        bool yes=1;
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){
                yes=0;
                break;
            }
        }
        if(yes) cout<<i<<endl;
    }
    return 0;
}
