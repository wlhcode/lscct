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
	double n,g,b,gs=0,bs=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>g;
		gs+=g;
	}
	for(int i=0;i<n;i++){
		cin>>b;
		bs+=b;
	}
	cout<<setprecision(4)<<fixed<<abs(gs-bs)/n<<endl;
	return 0;
}

