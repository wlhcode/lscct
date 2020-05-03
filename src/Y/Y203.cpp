#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a,b,n,c=0;
	cin>>a>>b>>n;
	for(ll i=1;i<=a;i++){
		ll j=n-i;
		if(j<=b&&j>=1) c++;
	}
	if(c==1) cout<<"There is 1 way to get the sum "<<n<<"."<<endl;
	else cout<<"There are "<<c<<" ways to get the sum "<<n<<"."<<endl;
	return 0;
}

