#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,d;
	cin>>n>>d;
	n-=n%100;
	for(int i=0;i<=99;i++){
		if((n+i)%d==0){
			cout<<setfill('0')<<setw(2)<<i<<endl; 
			return 0;
		}
	}
	return 0;
}

