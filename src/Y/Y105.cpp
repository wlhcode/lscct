#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[1000000],s2[1000000];
    while(cin>>s1>>s2){
        int len1=strlen(s1);
        int len2=strlen(s2);
        int tmp=0,count=0;
        for(int i=0;i<len1;i++){
            for(int j=tmp;j<len2;j++){
                if(s1[i]==s2[j]){
                    tmp=j+1;
                    count++;
                    break;
                }
            }
        }
        if(count!=len1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
