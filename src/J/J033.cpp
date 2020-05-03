#include<bits/stdc++.h>
#define ll long long
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
	int n,a,b;
	cin>>n;
	if(n%2==0){
		if(n==4){
			cout<<"2 2"<<endl;
			return 0;
		}
		a=n/2;
		b=a;
		if(a%2==0){
			a--;
			b++;
		}
		while(a>1){
			if(prime(a)&&prime(b)) break;
			a-=2;
			b+=2;
		}
		if(a>1) cout<<a<<" "<<b<<endl;
		else cout<<"Impossible"<<endl;
	}
	else{
		a=n-2;
		if(prime(a)) cout<<2<<" "<<a<<endl;
		else cout<<"Impossible"<<endl;
	}
	return 0;
}

