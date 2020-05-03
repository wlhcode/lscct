#include<bits/stdc++.h>
using namespace std;
#define int long long
bool square(int n){
    double q=sqrt(n);
    if(ceil(q)==floor(q)) return true;
    return false;
}
int32_t main(){
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        int q=0;
        for(int j=1;j*j<=t;j++){
            if(t%j==0) q++;
        }
        q*=2;
        if(square(t)) q--;
        cout<<q<<endl;
    }
}
