#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string s;
bool prime(int n){
	if(n==1) return false;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,count=1000;
	cin>>n;
	ll sq=sqrt(n)-1000,zero=1;
	for(ll i=max(sq,zero);i*i<=n;i++){
		s.clear();
		s+=to_string(i);
		ll res=i*i;
		for(int j=0;j<s.length();j++) res+=i*(s.at(j)-'0');
		if(res==n){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
}

