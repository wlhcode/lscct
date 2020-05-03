#include "bits/stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,arr[15],val[15]={1000,500,200,100,50,20,10,5,2,1,};
    cin>>n;
    for(int i=0;i<12;i++) arr[i]=0;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        int k=a*10-b*10;
        for(int j=0;k>0&&j<10;j++){
            int z=k/val[j];
            if(z<0) z=0;
            arr[j]+=z;
            k-=z*val[j];
        }
    }
    for(int i=0;i<9;i++) cout<<arr[i]<<" ";
    cout<<arr[9]<<endl;
    return 0;
}

