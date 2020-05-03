#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[201][201];
main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin>>y>>x;
    for(int i=1;i<=y;i++){
        for(int j=1;j<=x;j++){
            cin>>arr[j][i];
            // cout<<arr[j][i]<<" ";
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char s;
        cin>>s>>y>>x;
        if(s=='A'){
            int p;
            cin>>p;
            arr[x][y]+=p;
        }
        else cout<<arr[x][y]<<endl;
    }
}
