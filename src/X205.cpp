#include "bits/stdc++.h" // replace "" with <>
using namespace std;
char q[12][12];
int r,c,k,coutnum=0;
char maxnum='#';
void rec(int x,int y,string s){
    if(s.length()==k){
        cout<<s;
        coutnum++;
        if(coutnum%10==0||s==string(k,maxnum)) cout<<endl;
        else cout<<" ";
        return;
    }
    bool used[7];
    for(int i=0;i<5;i++) used[i]=0;
    for(int i=0;i<5;i++){
        char low='9'+1;
        int lx,ly,last=5;

        if(q[x][y]<low&&!used[0]){ //same
            lx=x;ly=y;
            low=q[lx][ly];
            used[last]=0;
            used[0]=1;last=0;
        }
        if(q[x][y+1]<low&&!used[1]){ //up
            lx=x;ly=y+1;
            low=q[lx][ly];
            used[last]=0;
            used[1]=1;last=1;
        }
        if(q[x+1][y]<low&&!used[2]){ //right
            lx=x+1;ly=y;
            low=q[lx][ly];
            used[last]=0;
            used[2]=1;last=2;
        }
        if(q[x][y-1]<low&&!used[3]){ //down
            lx=x;ly=y-1;
            low=q[lx][ly];
            used[last]=0;
            used[3]=1;last=3;
        }
        if(q[x-1][y]<low&&!used[4]){ //left
            lx=x-1;ly=y;
            low=q[lx][ly];
            used[last]=0;
            used[4]=1;last=4;
        }
        if(low<='9') rec(lx,ly,s+string(1,q[lx][ly]));
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++) q[i][j]='?';
    }
    cin>>r>>c>>k;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>q[j][i];
            if(q[j][i]>maxnum&&q[j][i]<='9') maxnum=q[j][i];
            if(q[j][i]<'0'||q[j][i]>'9') q[j][i]='?';
        }
    }
    for(char i='0';i<='9';i++){
        for(int y=1;y<=r;y++){
            for(int x=1;x<=c;x++){
                if(q[x][y]==i) rec(x,y,string(1,i));
            }
        }
    }
    return 0;
}
