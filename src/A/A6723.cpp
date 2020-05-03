#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int a[10001]={0};
char s[10001];
int main(){
    int i=0;
    bool ok=false;
    while(cin>>s) {
        for(int k=strlen(s)-1;k>=0;k--){
            a[i]+=(s[k]-48)*pow(10,(strlen(s)-k-1));
        }for(int t=0;t<strlen(s);t++){
            if(s[t]=='/') {
                ok=true;
                break;
            }
        }
        if(a[i]<8) cout<<"Underflow!"<<endl;
        else if(a[i]>13||ok) cout<<"Overflow!"<<endl;
        else if(a[i]==13) cout<<"6227020800"<<endl;
        else{
            int fact=1;
            for(int j=1;j<=a[i];j++){
                fact*=j;
            }cout<<fact<<endl;
        }
        ok=false;
        i++;
    }
    return 0;
}
