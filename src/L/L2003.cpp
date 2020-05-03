#include "bits/stdc++.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int strlen,n;
    string s;
    cin>>strlen>>s>>n;
    vector<int> alph[30];
    int temp[30];
    // cout<<s<<endl;
    for(int i=0;i<30;i++) temp[i]=0;
    for(int i=0;i<strlen;i++){
        int q=s[i]-'a';
        alph[q].push_back(i+1);
        temp[q]++;
    }
    for(int i=0;i<n;i++){
        cin>>s;
        int freq[30];
        for(int i=0;i<30;i++) freq[i]=0;
        int m=0;
        for(int i=0;i<s.length();i++) freq[int(s[i]-'a')]++;
        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            else if(temp[i]>=freq[i]) m=max(m,alph[i].at(freq[i]-1));
            else{
                m=-1;
                break;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
