#include<iostream>
using namespace std;
int arr[1005];
int main(){
    int v,n,t=0;
    cin>>v>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v-=arr[i];
        if(v<=0){
            for(int i=v;i<=0;i+=250){
                v+=250;
                t+=250;
            }
        }
    }
    cout<<"$"<<t<<endl;
    return 0;
}
