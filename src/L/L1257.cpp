#include<bits/stdc++.h>
#define int long long
using namespace std;
//int arr[50000];
bool prime(int n){
	if(n==1) return false;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,o;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>o;
		int s=sqrt(o);
		if(s*s!=o){
			cout<<"x";
			continue;
		}
		if(prime(s)) cout<<"o";
		else cout<<"x";
	}
	cout<<endl;
}

