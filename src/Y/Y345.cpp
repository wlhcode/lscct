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
	int n,c2=0,c5=0,l=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		int q=i;
		while(q%2==0){
			q/=2;
			c2++;
		}
		while(q%5==0){
			q/=5;
			c5++;
		}
		l*=q;
		l=l%10;
//		cout<<l<<endl;
	}
	if((c2-c5)%4==1) l*=2;
	if((c2-c5)%4==2) l*=4;
	if((c2-c5)%4==3) l*=8;
	if((c2-c5)%4==0) l*=6;
	l=l%10;
	if(n==1) cout<<1<<" "<<0<<endl;
	else cout<<l<<" "<<min(c2,c5)<<endl;
	return 0;
}

