#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int c;
        cin>>c;
        cin>>s;
        for(int j=0;j<8*c;j+=8){
            char z=0;
            for(int k=j+7;k>=j;k--){
                if(s[k]=='I') z+=pow(2,j+7-k);
            }
            cout<<z;
        }
        cout<<endl;
    }
}
