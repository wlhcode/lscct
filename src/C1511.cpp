#include<bits/stdc++.h>
using namespace std;
char as[10];
char bs[10];
int seq[150][3];
int main(){
    int n,ac=0,bc=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>as;
        if(as[0]=='r') seq[i][0]=1;
        else if(as[0]=='p') seq[i][0]=2;
        else seq[i][0]=3;
    }
    for(int i=0;i<n;i++){
        cin>>bs;
        if(bs[0]=='r') seq[i][1]=1;
        else if(bs[0]=='p') seq[i][1]=2;
        else seq[i][1]=3;
    }
    for(int i=0;i<n;i++){
        if(seq[i][0]!=seq[i][1]){
            if(seq[i][0]==seq[i][1]%3+1) ac++;
            else bc++;
        }
    }
    cout<<ac<<" "<<bc<<endl;
    /*
    for(int i=0;i<n;i++) cout<<seq[i][0]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<seq[i][1]<<" ";
    */
    return 0;
}
