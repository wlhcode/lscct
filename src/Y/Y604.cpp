#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int arr[6]={1,5,10,25,50,};
int n,w=0;
void count(int r,int c){
    if(r<0) return;
    else if(r==0){
        w++;
        return;
    }
    for(int i=0;i<=c;i++) count(r-arr[i],i);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    if(n==0){
        cout<<"There is only 1 way to produce 0 cents change."<<endl;
        return 0;
    }
    for(int i=0;i<5;i++) count(n-arr[i],i);
    if(w!=1) cout<<"There are "<<w<<" ways";
    else cout<<"There is only "<<w<<" way";
    cout<<" to produce "<<n<<" cents change."<<endl;
    return 0;
}
