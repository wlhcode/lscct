#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
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
	int scr,boat;
	cin>>scr>>boat;
	int pos=1,a_pos,n,d=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a_pos;
		while(a_pos<pos){
			pos--;
			d++;
		}
		while(a_pos>pos+boat-1){
			pos++;
			d++;
		}
//		cout<<pos<<endl;
	}
	cout<<d<<endl;
}

