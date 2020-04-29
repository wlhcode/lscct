#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
double arr[300];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int time=0;
    for(int i=0;i<n;i++){
        int tmp=1;
        while(arr[i]==arr[i+1]){
            tmp++;
            i++;
        }
        if(tmp>time) time=tmp;
    }
    for(int i=0;i<n;i++){
        int tmp=1;
        while(arr[i]==arr[i+1]){
            tmp++;
            i++;
        }
        if(tmp==time) cout<<setprecision(2)<<fixed<<arr[i]<<endl;
    }
    return 0;
}

