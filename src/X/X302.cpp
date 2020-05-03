#include"bits/stdc++.h"
using namespace std;
char maze[105][105];
vector<int> edges[10005];
int dist[10005],from[10005];
bool visited[10005];
int main(){
    int n,start,end;
    cin>>n;
    for(int i=0;i<102;i++){
        for(int j=0;j<102;j++) maze[j][i]='1';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>maze[j][i];
            if(maze[j][i]=='S') start=(i-1)*n+j;
            else if(maze[j][i]=='T') end=(i-1)*n+j;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(maze[j][i]=='1') continue;
            if(maze[j][i-1]!='1') edges[(i-1)*n+j].push_back((i-2)*n+j);
            if(maze[j-1][i]!='1') edges[(i-1)*n+j].push_back((i-1)*n+j-1);
            if(maze[j+1][i]!='1') edges[(i-1)*n+j].push_back((i-1)*n+j+1);
            if(maze[j][i+1]!='1') edges[(i-1)*n+j].push_back(i*n+j); 
        }
    }
    for(int i=0;i<10003;i++) visited[i]=0;
    queue<int> q;
    q.push(start);
    dist[start]=0;
    from[start]=-1;
    while(!q.empty()){
        int t=q.front();
        for(int i=0;i<edges[t].size();i++){
            int p=edges[t].at(i);
            if(!visited[p]){
                q.push(p);
                visited[p]=1;
                from[p]=t;
                dist[p]=dist[t]+1;
            }
        }
        q.pop();
    }
    cout<<dist[end]+1<<endl;
    stack<int> s;
    s.push(end);
    while(s.top()!=start) s.push(from[s.top()]);
    while(!s.empty()){
        int f=s.top(),x=s.top()%n;
        if(x==0) x=n;
        int y=(f-x)/n+1;
        cout<<y<<","<<x<<",";
        s.pop();
        if(s.empty()) cout<<"A"<<endl;
        else{
            if(s.top()==f-1) cout<<"W"<<endl;
            else if(s.top()<f) cout<<"N"<<endl;
            else if(s.top()==f+1) cout<<"E"<<endl;
            else cout<<"S"<<endl;
        }
    }
    return 0;
}
