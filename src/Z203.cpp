#include<bits/stdc++.h>
using namespace std;
int arr[1500];
int main(){
    double n,q,s=0;
    cin>>n>>q;
    for(int i=0;i<q;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<ceil(s/n)<<endl;
    return 0;
}
