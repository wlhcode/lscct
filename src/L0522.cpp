#include<bits/stdc++.h>
#define int long long
using namespace std;
char s[100];
int32_t main(){
int n,prod=1;
cin>>n;
for(int i=0;i<n;i++){
cin>>s;
prod*=strlen(s);
}
cout<<prod<<endl;
return 0;
}
