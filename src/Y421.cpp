#include<bits/stdc++.h>
using namespace std;
int arr[5000005];
int main(){
    int i=0;
    cin>>i;
    for(int j=0;j<i;j++) cin>>arr[j];
    sort(arr,arr+i);
    cout<<arr[(i-1)/2]<<endl;
}
