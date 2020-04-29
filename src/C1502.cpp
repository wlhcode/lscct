#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[300];
    gets(s);
    int csad=0,chap=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==':'&&s[i+1]=='-'){
            if(s[i+2]==')') chap++;
            else if(s[i+2]=='(') csad++;
        }
    }
    if(chap==0&&csad==0) cout<<"none"<<endl;
    else if(chap>csad) cout<<"happy"<<endl;
    else if(csad>chap) cout<<"sad"<<endl;
    else cout<<"unsure"<<endl;
    return 0;
}

