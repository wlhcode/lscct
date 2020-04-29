#include<bits/stdc++.h>
using namespace std;
char s[300];
char f[30];
int main(){
    int n,q;
    cin>>n>>s>>q;
    for(int i=0;i<q;i++){
        int a=0;
        cin>>f[i];
        for(int j=0;j<n;j++){
            if(f[i]==s[j]) a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
