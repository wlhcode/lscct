#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int n,m;
int a[3005],b[3005],c[3005];
int u=0,ai,bi,ci;
int runtime=0,exceeded=0;

int retind(int a[],int val){
    int l=0,h=m-1;
    int i=(l+h)/2;
    while(a[i]!=val){
        if(a[i]>val) h=i;
        else l=i;
        if(i==(l+h)/2) break;
        else i=(l+h)/2;
    }
    for(int k=h;k>=l;k--){
        if(a[k]<=val) return k;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int j=0;j<m;j++){
        cin>>a[j];
        if(runtime!=-1){
            if(a[j]%2==1){
                if(runtime==0) runtime=1;
                else if(runtime==2) runtime=-1;
            }
            else{
                if(runtime==0) runtime=2;
                else if(runtime==1) runtime=-1;
            }
        }
    }
    if(runtime==1) exceeded++;
    else if(runtime==-1) exceeded=-10;
    runtime=0;
    for(int j=0;j<m;j++){
        cin>>b[j];
        if(runtime!=-1){
            if(a[j]%2==1){
                if(runtime==0) runtime=1;
                else if(runtime==2) runtime=-1;
            }
            else{
                if(runtime==0) runtime=2;
                else if(runtime==1) runtime=-1;
            }
        }
    }
    if(runtime==1) exceeded++;
    else if(runtime==-1) exceeded=-10;
    for(int j=0;j<m;j++){
        cin>>c[j];
        if(runtime!=-1){
            if(a[j]%2==1){
                if(runtime==0) runtime=1;
                else if(runtime==2) runtime=-1;
            }
            else{
                if(runtime==0) runtime=2;
                else if(runtime==1) runtime=-1;
            }
        }
    }
    if(runtime==1) exceeded++;
    else if(runtime==-1) exceeded=-10;
    
    if(exceeded>0){
        if(runtime%2==1){
            if(m%2==0) m--;
        }
        else{
            if(m%2==1) m--;
        }
    }

    sort(a,a+m);
    sort(b,b+m);
    sort(c,c+m);

    if(a[m-1]+b[m-1]+c[m-1]<=n){
        cout<<a[m-1]<<" "<<b[m-1]<<" "<<c[m-1]<<endl;
        return 0;
    }
    for(int i=retind(a,n-b[0]-c[0]);i>=0;i--){
        int x=a[i],y,zi;
        for(int j=retind(b,n-x-c[0]);j>=0;j--){
            y=b[j];
            zi=retind(c,n-x-y);
            if(x+y+c[zi]>u){
                u=x+y+c[zi];
                if(u==n){
                    cout<<x<<" "<<y<<" "<<c[zi]<<endl;
                    return 0;
                }
                ai=i;bi=j;ci=zi;
            }
        }
    }
    cout<<a[ai]<<" "<<b[bi]<<" "<<c[ci]<<endl;
    return 0;
}
