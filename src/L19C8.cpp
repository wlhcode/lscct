#include <bits/stdc++.h>
using namespace std;
int arr[15];
string s;
int main(){
    cin>>s;
    memset(arr,12,0);
    for(int i=0;i<s.length();i++) arr[s.at(i)-'0']++;
    
    int small=10,val=INT_MAX;
    for(int i=1;i<10;i++){
        if(arr[i]<val){
            small=i;
            val=arr[i];
        }
    }
    if(1+arr[0]+1<=val+1){
        cout<<1;
        for(int i=0;i<=arr[0];i++) cout<<0;
        cout<<endl;
    }
    else{
        for(int i=0;i<=arr[small];i++) cout<<small;
        cout<<endl;
    }
}
