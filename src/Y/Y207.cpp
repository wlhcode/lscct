#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v;
    int n,m,q=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++) v.push_back(i);
    while(v.size()>1){
        q=(q+m)%v.size();
        // cout<<v.at(q)<<" ";
        v.erase(v.begin()+q);
    }
    cout<<v.at(0)<<endl;
    return 0;
}
