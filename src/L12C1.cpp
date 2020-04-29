#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string s;
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
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		cin>>s;
		int fsum=0,ssum=0;
		bool cor=true;
		for(int i=0;i<t;i++){
			if(i<t/2) fsum+=s.at(i)-'0';
			else ssum+=s.at(i)-'0';
			if(s.at(i)!='4'&&s.at(i)!='7'){
				cor=false;
				break;
			} 
		}
		if(fsum==ssum&&cor) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

