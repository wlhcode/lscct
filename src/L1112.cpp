#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
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
	ll n,alltime=0,sofar=0,last=-1;
	cin>>n;
	while(cin>>n){
		if(n>last) sofar++;
		else sofar=1;
		alltime=max(sofar,alltime);
		last=n;
	}
	cout<<alltime<<endl;
}

