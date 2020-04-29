#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
ll s[5];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>s[0]>>s[1];
		ll d=0;
		ll k;
		k=s[0]+9*((s[1]-s[0])/9);
		ll p=k%9;
		for(ll i=k;i<=s[1];i++){
			d+=p;
			p++;
		}
		cout<<d%9;
	}
	cout<<endl;
	return 0;
}

