#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool prime(int n){
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,q=1;
	while(cin>>n){
		if(n==0) return 0;
		else{
			if(n<=3) ;
			ll i=sqrt(n)*2+10;
			while(i*(i-3)/2>n) i-=100;
			if(i<0) i=1;
			while(i*(i-3)/2<n) i++;
			cout<<"Case "<<q<<": "<<i<<endl;
			q++;
		}
	}
	return 0;
}

