#include<bits/stdc++.h>
using namespace std;
int arr[100500];
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++) cin>>arr[i];
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        int lb=0,ub=m-1,mid;
        while(lb<=ub){
            mid=(lb+ub)/2;
            if(t>arr[mid]) lb=mid+1;
            else if(t<arr[mid]) ub=mid-1;
            else break;
//          cout<<mid<<endl;
        }
        if(mid==m-1&&arr[mid]<t) cout<<"No"<<endl;
        else if(arr[mid]>=t) cout<<arr[mid]<<endl;
        else if(arr[mid]<t) cout<<arr[mid+1]<<endl;
    }
}
