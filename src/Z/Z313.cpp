#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
    int n,k=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        string s;
        cin>>j>>s;
        if(s=="bomb"){
            arr[k]=j;
            k++;
        }
    }
    cout<<k<<endl;
    if(k!=0){
        for(int i=0;i<k-1;i++) cout<<arr[i]<<" ";
        cout<<arr[k-1]<<endl;
    }
}
