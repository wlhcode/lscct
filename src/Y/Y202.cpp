#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int arr[10005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<int> q1;
    queue<int> q2;
    q1.push(0);
    q2.push(0);
    int n;
    bool f=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(f||(arr[i]<q1.back()&&arr[i]<q2.back())) f=1;
        else if(q1.back()>=q2.back()&&arr[i]-q1.back()>=0) q1.push(arr[i]);
        else q2.push(arr[i]);
    }
    if(f) cout<<"NO"<<endl;
    else{
        q1.pop();
        q2.pop();
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(q1.front()==arr[i]){
                cout<<1;
                q1.pop();
            }
            else cout<<2;
            if(i<n-1) cout<<" ";
            else cout<<endl;
        }
    }
    return 0;
}
