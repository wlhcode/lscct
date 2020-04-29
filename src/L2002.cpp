#include "bits/stdc++.h"
#define int long long
using namespace std;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+5];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    if(arr[n]<=0) cout<<-1<<endl;
    else{
        int ord[n+5];
        ord[0]=0;
        int l=0,r=1,s=1;
        while(l<n){
            if((arr[r]-arr[l]<arr[n]-arr[ord[s-1]]||r==n)&&arr[r]-arr[l]>0) ord[s]=r,s++,l=r;
            r++;
        }
        cout<<s-1<<endl;
        for(int i=1;i<s;i++) cout<<ord[i]-ord[i-1]<<(i==s-1?"\n":" ");
    }
    return 0;
}
