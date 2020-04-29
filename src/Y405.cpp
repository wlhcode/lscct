#include "bits/stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<double,pair<int,int> > > v;
    int n;
    cin>>n;
    v.push_back(make_pair(0,make_pair(0,1)));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) v.push_back(make_pair(double(j)/double(i),make_pair(j,i)));
    }
    stable_sort(v.begin(),v.end());
    cout<<"0/1"<<endl;
    for(int i=1;i<v.size();i++){
        if(v[i].first>v[i-1].first) cout<<v[i].second.first<<"/"<<v[i].second.second<<endl;
    }
    return 0;
}
