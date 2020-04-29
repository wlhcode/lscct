#include "bits/stdc++.h"
using namespace std;
char dllm(char k,int q){
    if(q==0) return k;
    k--;
    if(k<'A') k='Z';
    return dllm(k,q-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    string s;
    cin>>k;
    getline(cin,s);
    getline(cin,s);
    for(int i=0;i<s.length();i++) cout<<dllm(s[i],3*i+k+3);
    cout<<endl;
    return 0;
}
