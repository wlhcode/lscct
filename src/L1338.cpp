#include<bits/stdc++.h>
#define int long long
#define double long double
using namespace std;
int digitsum(int a){
	if(a==0) return 0;
	return a%10+digitsum(a/10);
}
bool prime(int n){
	if(n==1) return false;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,t,q;
	double c=0,h;
	cin>>a>>b;
	for(int i=0;i<a*b;i++){
		cin>>t;
		c+=t;
	}
	cin>>h>>q;
	for(int i=0;i<q;i++) c*=1+h/100;
	cout<<setprecision(0)<<fixed<<round(c)<<endl;
}

