#include<bits/stdc++.h>
using namespace std;
double arr[10];
int main(){
    for(int i=0;i<6;i++) cin>>arr[i];
    sort(arr,arr+6);
    cout<<(arr[1]+arr[2]+arr[3]+arr[4])/4<<endl;
    return 0;
}
