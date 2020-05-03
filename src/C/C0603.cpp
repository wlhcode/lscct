#include "bits/stdc++.h" // replace "" with <>
using namespace std;
int q[30]={21,22,23,31,32,33,41,42,43,51,52,53,61,62,63,71,72,73,74,81,82,83,91,92,93,94,};
string s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        cin>>s;
        if(s=="halt") break;
        int n=0,b=0;
        for(int i=0;i<s.length();i++){
            n+=q[s[i]-'a']%10;
            if(b==q[s[i]-'a']/10) n+=2;
            b=q[s[i]-'a']/10;
        }
        cout<<n<<endl;
    }
    return 0;
}
