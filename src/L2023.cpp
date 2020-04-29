#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,l,q=-1;
    bool sorted=1;
    cin>>n>>l;
    int arr[n+3];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>=1&&arr[i]<arr[i-1]) sorted=0;
        if(q==-1&&i>=1&&arr[i-1]!=1) q=i;
    }
    if(n==l){
        if(sorted) cout<<"No solution"<<endl;
        else{
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
        return 0;
    }
    if(!sorted){
        for(int i=0;i<l-n;i++) cout<<1<<" ";
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    else{
        if(n==1){
            if(arr[0]==1){
                if(l==2) cout<<2<<" "<<1<<" "<<endl;
                else{
                    for(int i=0;i<l-2;i++) cout<<1<<" ";
                    cout<<2<<" "<<1<<" "<<endl;
                }
            }
            else{
                for(int i=0;i<l-2;i++) cout<<1<<" ";
                cout<<arr[0]<<" "<<1<<" "<<endl;
            }
        }
        else if(q!=-1){
            for(int i=0;i<l-n-1;i++) cout<<1<<" ";
            for(int i=0;i<q;i++) cout<<arr[i]<<" ";
            cout<<1<<" ";
            for(int i=q;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
        else{
            if(arr[n-1]!=1){
                for(int i=0;i<l-n-1;i++) cout<<1<<" ";
                for(int i=0;i<n;i++) cout<<arr[i]<<" ";
                cout<<1<<" "<<endl;
            }
            else{
                for(int i=0;i<l-2;i++) cout<<1<<" ";
                cout<<2<<" "<<1<<" "<<endl;
            }
        }
    }
}
