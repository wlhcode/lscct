#include "bits/stdc++.h"
#define ld long double
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ld r,g,b;
    cin>>r>>g>>b;
    ld sum=r+g+b;
    sum*=sum-1;
    cout<<setprecision(3)<<fixed<<r*(r-1)/sum+g*(g-1)/sum+b*(b-1)/sum<<endl;
    return 0;
}
