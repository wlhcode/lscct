#include<bits/stdc++.h>
#define ll long long
#define ld long double
char s[500];
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
	int n,q=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int t=0;
		for(int j=0;j<n;j++){
			if(s[j]=='x') t++;
			if(t>q) q=t;
			if(s[j]=='~') t=0;
		}
		//cout<<q<<endl;
	}
	cout<<q<<endl;
	return 0;
}

