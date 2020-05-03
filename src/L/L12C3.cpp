#include "bits/stdc++.h"
#define int long long
using namespace std;
int arr[1000005];
main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,o;
    cin>>n>>o;
    for(int i=0;i<=n+1;i++) arr[i]=0;
    for(int i=0;i<o;i++){
        int d,x,y;
        cin>>d>>x>>y;
        arr[x]+=d;
        arr[y+1]-=d;
    }
    int m=0;
    for(int i=1;i<=n;i++){
        m+=arr[i];
        cout<<m<<endl;
    }
    return 0;
}
