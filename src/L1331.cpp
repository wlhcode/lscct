#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long double n,q=20;
	cin>>n;
	if(n==0){
		cout<<"0"<<endl;
		return 0;
	}
	for(ll i=2;i<=n;i++) q*=i;
	long double p=ceil(q/76);
	cout<<setprecision(0)<<fixed<<p<<endl;
	return 0;
}

