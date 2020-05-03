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
	int m,n,sum_m=1,sum_n=1;
	cin>>m>>n;
	for(int i=2;i*i<=m;i++){
		if(m%i==0){
			sum_m+=i;
			if(i*i!=m) sum_m+=m/i;
		}
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			sum_n+=i;
			if(i*i!=n) sum_n+=n/i;
		}
	}
	if(sum_m==n&&sum_n==m&&n!=m) cout<<"Twins"<<endl;
	else cout<<"Not twins"<<endl;
}

