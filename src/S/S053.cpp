#include "bits/stdc++.h"
using namespace std;
vector<int> arr;
bool tested[10005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,z;
    cin>>n;
    n*=2;
    for(int i=0;i<n;i++){
        cin>>z;
        arr.push_back(z);
    }
    sort(arr.begin(),arr.begin()+n);
    for(int i=1;i<n;i++){
        int d=arr[i]-arr[0];
        if(d==0) continue;
        for(int j=0;j<n;j++) tested[j]=0;
        for(int j=0;j<n;j++){
            if(tested[j]) continue;
            if(binary_search(arr.begin(),arr.begin()+n,arr[j]+d)){
                int k=lower_bound(arr.begin(),arr.begin()+n,arr[j]+d)-arr.begin();
                while(tested[k]) k++;
                if(arr[k]!=arr[j]+d) break;
                else tested[k]=1;
            }
            else break;
        }
        if(tested[n-1]){
            z=d;
            break;
        }
    }
    cout<<z<<endl;
    for(int i=0;i<n;i++){
        if(tested[i]) cout<<arr[i]-z<<endl;
    }
    return 0;
}
