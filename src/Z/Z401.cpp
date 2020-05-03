#include<bits/stdc++.h>
using namespace std;
int main(){
    char c=getchar();
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        if(m>0) cout<<c;
        for(int j=1;j<m-1;j++){
            if(i==0||i==n-1) cout<<c;
            else cout<<" ";
        }
        if(m>1) cout<<c;
        cout<<endl;
    }
    return 0;
}
