#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[105000];
int32_t main(){
    int n,d=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--) d+=arr[i]*3*(n-i);
    cout<<d<<endl;
}
