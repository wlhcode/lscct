#include<bits/stdc++.h>
using namespace std;
char s[300];
int main(){
    int n,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int len=strlen(s);
        bool ans=true;
        for(int j=0;j<len;j++){
            if(s[j]<'A'||s[j]>'Z'){
                ans=false;
                break;
            }
        }
        if(ans) a++;
    }
    cout<<a<<endl;
    return 0;
}
