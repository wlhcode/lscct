#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m;
ll bigmod(ll b,ll p){
    if(p==0) return 1%m;
    if(p==1) return b%m;
    ll t=bigmod(b,p/2);
    if(p%2==1) return (t*t*b)%m;
    else return(t*t)%m;
}
int main(){
    ll b,p;
    while(cin>>b>>p>>m){
        cout<<bigmod(b,p)<<endl;
    }
}
