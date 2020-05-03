#include "bits/stdc++.h"
using namespace std;
string s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(getline(cin,s)){
        if(s=="DONE") break;
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
            if(s[i]<'a'||s[i]>'z'){
                s.erase(i,1);
                i--;
            }
        }
        bool eat=1;
        while(s.length()>1){
            if(s[0]!=s[s.length()-1]){
                eat=0;
                break;
            }
            s.erase(0,1);
            s.erase(s.length()-1);
        }
        if(eat) cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }
    return 0;
}
