#include "bits/stdc++.h"
using namespace std;
vector<int> edges[19];
bool visited[19];
int dist[19];
char s[8][8];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int start=1,end=16;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) s[j][i]='1';
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++) cin>>s[j][i];
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
           if(s[j][i]=='1') continue;
           else if(s[j][i]=='S') start=(i-1)*4+j;
           else if(s[j][i]=='E') end=(i-1)*4+j;
           if(s[j][i-1]!='1') edges[(i-1)*4+j].push_back((i-2)*4+j);
           if(s[j-1][i]!='1') edges[(i-1)*4+j].push_back((i-1)*4+j-1);
           if(s[j+1][i]!='1') edges[(i-1)*4+j].push_back((i-1)*4+j+1);
           if(s[j][i+1]!='1') edges[(i-1)*4+j].push_back(i*4+j); 
        }
    }
    for(int i=0;i<17;i++) visited[i]=0;
    queue<int> q;
    q.push(start);
    visited[start]=1;
    dist[start]=0;
    while(!q.empty()){
        int p=q.front();
        for(int i=0;i<edges[p].size();i++){
            int y=edges[p].at(i);
            if(!visited[y]){
                q.push(y);
                dist[y]=dist[p]+1;
                visited[y]=1;
            }
        }
        q.pop();
    }
    if(!visited[end]) cout<<"No solution"<<endl;
    else cout<<dist[end]<<endl;
    return 0;
}
