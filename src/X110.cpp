#include<bits/stdc++.h>
using namespace std;
int arr[10];
int n,m;
void recursion(int q){
    if(q>=pow(m,n)) return;
    for(int i=n-1;arr[i]>m;i--){
        arr[i]=1;
        arr[i-1]++;
    }
    for(int j=0;j<n;j++) cout<<arr[j];
    cout<<endl;
    arr[n-1]++;
    recursion(q+1);
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++) arr[i]=1;
    recursion(0);
}
