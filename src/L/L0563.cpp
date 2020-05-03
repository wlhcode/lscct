#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int arr[505];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<503;i++) arr[i]=0;
    int x,y,q=INT_MIN;
    cin>>x>>y;
    for(int i=0;i<y;i++){
        int a,b;
        cin>>a>>b;
        arr[a]+=b;
    }
    for(int i=1;i<=x;i++){
        if(q<arr[i]){
            y=i;
            q=arr[i];
        }
    }
    cout<<y<<endl;
    return 0;
}
