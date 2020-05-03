#include "bits/stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > e[m+2];
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        int a=s[0]-'A';
        int op=int(s[1])-'=';
        int b=s[2]-'A';
        e[a].push_back(make_pair(b,op));
        e[b].push_back(make_pair(a,-1*op));
    }
    char x,y;
    cin>>x>>y;
    int a=x-'A',b=y-'A';
    queue<int> q;
    bool vs[n+2];

    // equal
    if(x==y){
        cout<<x<<"="<<y<<endl;
        return 0;
    }
    for(int i=0;i<n;i++) vs[i]=0;
    q.push(a);
    while(!q.empty()){
        for(int i=0;i<e[q.front()].size();i++){
            if(e[q.front()].at(i).second==0&&vs[e[q.front()].at(i).first]==0){
                if(e[q.front()].at(i).first==b){
                    cout<<x<<"="<<y<<endl;
                    return 0;
                }
                else q.push(e[q.front()].at(i).first);
            }
        }
        vs[q.front()]=1;
        q.pop();
    }

    // less
    for(int i=0;i<n;i++) vs[i]=0;
    q.push(a);
    while(!q.empty()){
        for(int i=0;i<e[q.front()].size();i++){
            if(e[q.front()].at(i).second<=0&&vs[e[q.front()].at(i).first]==0){
                if(e[q.front()].at(i).first==b){
                    cout<<x<<"<"<<y<<endl;
                    return 0;
                }
                else q.push(e[q.front()].at(i).first);
            }
        }
        vs[q.front()]=1;
        q.pop();
    }

    // great
    for(int i=0;i<n;i++) vs[i]=0;
    q.push(a);
    while(!q.empty()){
        for(int i=0;i<e[q.front()].size();i++){
            if(e[q.front()].at(i).second>=0&&vs[e[q.front()].at(i).first]==0){
                if(e[q.front()].at(i).first==b){
                    cout<<x<<">"<<y<<endl;
                    return 0;
                }
                else q.push(e[q.front()].at(i).first);
            }
        }
        vs[q.front()]=1;
        q.pop();
    }

    cout<<"Cannot be determined"<<endl;
}
