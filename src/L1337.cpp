#include<bits/stdc++.h>
using namespace std;
int arr[6000];
int main(){
    int a,n;
    cin>>a>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        a-=arr[i];
        if(a<0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}
