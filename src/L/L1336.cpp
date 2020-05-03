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
	int a,p1,p2;
	cin>>a;
	p1=a/2+10000;
	p2=a;
	cout<<max(p1,p2)<<endl;
	return 0;
}

