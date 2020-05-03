#include "bits/stdc++.h"
using namespace std;
double arr[10005];
int ind=0;
double fat(int a,int b){
    if(arr[a+1]>arr[a]){
        if(a+1==b) return fat(a+1,b+1);
        else return fat(a+1,b);
    }
    if(arr[b+1]<arr[b]) return fat(a,b+1);
    ind=b+1;
    return (arr[a]/arr[b]>1?arr[a]/arr[b]:1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    double m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    arr[n]=1000;
    while(ind<n-2) m*=fat(ind,ind+1);
    cout<<setprecision(2)<<fixed<<m<<endl;
    return 0;
}
