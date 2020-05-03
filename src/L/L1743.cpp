#include "bits/stdc++.h"
#define int unsigned long long
using namespace std;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+3];
    arr[0]=0;
    for(int i=1;i<=n;i++) cin>>arr[i];
    int l,r,s=0,p=1;
    cin>>l>>r;
    for(int i=l;i<=r;i++) s+=arr[i];
    cout<<s<<endl;
    if(l<=1){
        if(r<n){
            for(int i=r+1;i<=n;i++) p*=arr[i];
        }
        else p=0;
    }
    else{
        for(int i=1;i<l;i++) p*=arr[i];
        if(r<n){
            for(int i=r+1;i<=n;i++) p*=arr[i];
        }
    }
    cout<<p<<endl;
    return 0;
}
