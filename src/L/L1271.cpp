#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;
int digitsum(int a){
	if(a==0) return 0;
	return a%10+digitsum(a/10);
}
bool prime(int n){
	if(n==1) return false;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0) return false;
	}
	return true;
}
string b;
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		int m=0,s=0,colin=0;
		while(b[colin]!=':') colin++;
		for(int j=colin-1;j>=0;j--) m+=(b[j]-'0')*pow(10,-j+colin-1);
		for(int j=colin+1;j<b.length();j++) s+=(b[j]-'0')*pow(10,b.length()-1-j);
		if(s>=60){
			m++;
			s-=60;
		}
		if(s==0&&m<=4){
			for(int j=0;j<m;j++) cout<<"+";
			cout<<endl;
		}
		else{
			if(m>0&&s<=39){
				m--;
				s+=60;
			}
			if(m>0) cout<<m;
			cout<<s<<"S"<<endl;
		}
	}
}


