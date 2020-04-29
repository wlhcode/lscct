#include<bits/stdc++.h>
using namespace std;
char s[200][200];
int main(){
    int n,acr=0,dwn=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>s[j][i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(s[j][i]=='-') count++;
            else count=0;
            if(count==2) acr++;
        }
    }
    for(int j=0;j<n;j++){
        int count=0;
        for(int i=0;i<n;i++){
            if(s[j][i]=='-') count++;
            else count=0;
            if(count==2) dwn++;
        }
    }
    cout<<acr<<" "<<dwn<<endl;
    return 0;
}

