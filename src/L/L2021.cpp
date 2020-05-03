#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;
main(){
    int n;
    cin>>n;
    int og[n+5];
    int mr[n+5];
    int pr[n+5];
    mr[0]=0;
    pr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>og[i];
        pr[i]=pr[i-1]+(i % 2 == 1 ? -1 : 1)*(og[i]);
        mr[i]=mr[i-1]+(i % 2 == 1 ? -1 : 1)*((i-1)*og[i]);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        int a=mr[r]-mr[l-1];
        a-=(r-l)*(pr[r]-pr[l-1]);
        if(l%2==1) a*=-1;
        cout<< (a % MOD + MOD) % MOD <<endl;
    }
}
        
