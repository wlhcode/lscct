#include<bits/stdc++.h>
using namespace std;
int arr[1005000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<arr[m-1]<<endl;
}
