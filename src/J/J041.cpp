#include "bits/stdc++.h" // replace "" with <>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,q=1;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        q=q*(x+y)/gcd(q,x+y);
    }
    cout<<q<<endl;
    return 0;
}
