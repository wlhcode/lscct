#include "bits/stdc++.h"
#define int long long
using namespace std;
main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,s=0;
        cin>>m;
        for(int j=0;j<m;j++){
            int a,b,c;
            cin>>a>>b>>c;
            s+=a*c;
        }
        cout<<s<<endl;
    }
    return 0;
}
