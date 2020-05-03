#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
long double l,r;
cin>>l>>r;
cout<<setprecision(0)<<fixed<<floor(sqrt(r))-ceil(sqrt(l))+1<<endl;
}
return 0;
}
