#include<bits/stdc++.h>
using namespace std;
string s1,s2,r1,r2;
int main(){
    getline(cin,s1);
    getline(cin,s2);
    
    for(int i=s1.length()-1;i>=0;i--) r1+=s1[i];
    cout<<r1<<endl;
    
    for(int i=s2.length()-1;i>=0;i--) r2+=s2[i];
    cout<<r2<<endl;
    
    for(int i=0;i<max(s2.length(),s1.length());i++){
        if(i<s1.length()) cout<<s1[i];
        if(i<s2.length()) cout<<s2[i];
    }
    cout<<endl;
    
    for(int i=0;i<max(r2.length(),r1.length());i++){
        if(i<r1.length()) cout<<r1[i];
        if(i<r2.length()) cout<<r2[i];
    }
    cout<<endl;
    
    long long a=0;
    for(int i=0;i<s1.length();i++) a+=s1[i];
    for(int i=0;i<s2.length();i++) a+=s2[i];
    cout<<a<<endl;
}

