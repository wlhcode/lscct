#include<bits/stdc++.h>
using namespace std;
int result[2005][2005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t,p;
    cin>>n>>t>>p;
    for(int i=0;i<n;i++){
        for(int j=0;j<t;j++) cin>>result[j][i];
    }
    for(int i=0;i<t;i++){
        int pt=n;
        for(int j=0;j<n;j++){
            if(result[i][j]==1) pt--;
        }
        result[i][2001]=pt;
        // cout<<pt<<endl;
    }
    for(int i=0;i<n;i++){
        int pt=0,sol=0;
        for(int j=0;j<t;j++){
            if(result[j][i]==1){
                pt+=result[j][2001];
                sol++;
            }
        }
        result[2001][i]=pt;
        result[2002][i]=sol;
        if(i==p-1) cout<<pt<<" ";
    }
    int rank=1;
    for(int i=0;i<n;i++){
        if(result[2001][i]>result[2001][p-1]){
            rank++;
            // cout<<i+1<<endl;
        }
        else if(result[2001][i]==result[2001][p-1]){
            if(result[2002][i]>result[2002][p-1]) rank++;
            else if(result[2002][i]==result[2002][p-1]){
                if(i<p-1) rank++;
            }
        }
    }
    cout<<rank<<endl;
}
