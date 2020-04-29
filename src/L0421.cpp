#include "bits/stdc++.h"
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    long double c=1;
    cin>>m>>n;
    for(int i=m+n;i>m+n-min(m,n);i--) c*=i;
    for(int i=min(m,n);i>1;i--) c/=i;
    cout<<setprecision(0)<<fixed<<c<<", "<<m*2+n*2-1<<endl;
    return 0;
}
