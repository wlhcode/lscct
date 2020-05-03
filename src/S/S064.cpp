#include "bits/stdc++.h"
using namespace std;
int arr[8][5][5]={
    {{2,2,0,0,},{2,2,0,0,},{2,2,0,0,},{2,2,0,0,},},
    {{4,0,0,0,},{1,1,1,1,},{4,0,0,0,},{1,1,1,1,},},
    {{1,3,0,0,},{1,1,2,0,},{3,1,0,0,},{2,1,1,0,},},
    {{3,1,0,0,},{1,1,2,0,},{1,3,0,0,},{2,1,1,0,},},
    {{2,2,0,0,},{1,2,1,0,},{2,2,0,0,},{1,2,1,0,},},
    {{2,2,0,0,},{1,2,1,0,},{2,2,0,0,},{1,2,1,0,},},
    {{1,2,1,0,},{3,1,0,0,},{1,2,1,0,},{1,3,0,0,},},
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w,h,n;
    cin>>w>>h>>n;
    int z[w+2];
    for(int i=0;i<w;i++) z[i]=0;
    for(int i=0;i<n;i++){
        int t,d,p;
        cin>>t>>d>>p;
        for(int j=-1;j<=2;j++) z[p+j]+=arr[t-1][d/90][j+1];
    }
    int m=INT_MAX;
    for(int i=0;i<w;i++) m=min(z[i],m);
    for(int i=h;i>0;i--){
        for(int j=0;j<w;j++){
            if(i<=z[j]-m) cout<<"x";
            else cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
