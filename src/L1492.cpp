#include<bits/stdc++.h>
#define int long long
#define ld long double
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
	int n;
	ld m,x,y,q;
	cin>>n>>m>>x>>y;
	for(int i=0;i<n;i++){
		ld x1,y1;
		cin>>x1>>y1;
		ld d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
		q=max(d,q);
	}
	q*=100;
	q=round(q);
	q/=100;
	cout<<setprecision(2)<<fixed<<q<<endl;
	if(q>m) cout<<"Too far"<<endl;
	else cout<<"Close enough"<<endl;
}

