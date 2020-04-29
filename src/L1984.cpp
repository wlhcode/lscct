#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	if(n%3==0){
		cout<<n/3<<" 1 3"<<endl;
		return 0;
	}
	else{
		double a=1;
		a/=3;
		long long p=pow(n,a);
		for(ll i=p-10;i<=p+10;i++){
			if(i*i*i==n){
				cout<<i<<" "<<i<<" "<<i<<endl;
				return 0;
			}
		}
		cout<<"-1 -1 -1"<<endl;
		return 0;
	}
}
