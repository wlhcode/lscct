#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int b[1500];
int g[1500];
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) cin>>g[i];
	sort(b,b+n);
	sort(g,g+n);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(b[i]-g[i]);
	}
	cout<<sum<<endl;
	return 0;
}

