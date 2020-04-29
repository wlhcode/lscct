#include<bits/stdc++.h>
using namespace std;
char s[50];
int main(){
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!='I'&&s[i]!='O'&&s[i]!='S'&&s[i]!='H'&&s[i]!='Z'&&s[i]!='X'&&s[i]!='N'){
            cout<<"NO"<<endl;
            return 0;
        }//ioshzxn
    }
    cout<<"YES"<<endl;
    return 0;
}
