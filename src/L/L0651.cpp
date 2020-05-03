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
	ld m,n,a,b,c;
	cin>>m>>n;
	cout<<setprecision(5)<<fixed;
	if(m!=n){
		a=min(m,n);
		c=max(m,n);
		cout<<a*c*cos(asin(a/c))/2<<endl;
	}
	cout<<m*n/2<<endl;
	return 0;
}

