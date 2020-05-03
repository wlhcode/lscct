#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i]){
            v.erase(v.begin()+i);
            n--;
            i--;
        }
    }
    for(int i=2;i<n;i++){
        if(v[i-2]==v[i-1]-1&&v[i-1]==v[i]-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
