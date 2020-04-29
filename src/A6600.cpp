#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;
bool arr[10005]={0};
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
	for(int i=0;i<=10000;i++){
		if(prime(i*i+i+41)) arr[i]=1;
	}
	int x,y;
	while(cin>>x>>y){
		double howmany=0;
		for(int i=x;i<=y;i++){
			if(arr[i]==1) howmany+=100;
		}
		double number=y-x+1;
		double percent=howmany/number;
		int n=percent*1000;
		if(n%10>=5) percent+=0.01-fmod(percent,0.01);
		cout<<setprecision(2)<<fixed<<percent<<endl;
	}
}

