#include<iostream>
using namespace std;
int arr[100500];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        // cout<<t<<endl;
        int lb=0,rb=n-1;
        int s=(lb+rb)/2;
        bool yes=false;
        while(lb<=rb){
            if(arr[s]<t) lb=s+1;
            else if(arr[s]>t) rb=s-1;
            else{
                cout<<"Yes"<<endl;
                yes=true;
                break;
            }
            s=(lb+rb)/2;
            // cout<<lb<<" "<<rb;
        }
        if(yes) continue;
        else cout<<"No"<<endl;
    }
}
