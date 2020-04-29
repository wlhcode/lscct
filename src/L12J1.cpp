#include<bits/stdc++.h>
using namespace std;
char s[300];
int main(){
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='E') s[i]+=21;
        else if(s[i]>='F'&&s[i]<='Z') s[i]-=5;
    }
    cout<<s<<endl;
    return 0;
}
