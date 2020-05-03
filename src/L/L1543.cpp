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
char s[5][5];
char str[5][5];
string t,g;
void find_c(char b){
	for(int k=0;k<4;k++){
		for(int l=0;l<4;l++){
			if(str[l][k]==b) g+=s[l][k];
		}
	}
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++) cin>>s[j][i];
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>t;
			if(t=="10") str[j][i]=':';
			else if(t=="11") str[j][i]=';';
			else if(t=="12") str[j][i]='<';
			else str[j][i]=t.at(0);
		} 
	}
	int n;
	cin>>n;
	for(int i=1;i<12;i++){
		for(int j=i+1;j<=12;j++){
			if(i+j==n){
				g.clear();
				find_c(i+'0');
				find_c('+');
				find_c(j+'0');
				cout<<g<<endl;
				cout<<g[2]<<g[1]<<g[0]<<endl;
			}
			if(j-i==n){
				g.clear();
				find_c(j+'0');
				find_c('-');
				find_c(i+'0');
				cout<<g<<endl;
			}
			if(i*j==n){
				g.clear();
				find_c(i+'0');
				find_c('*');
				find_c(j+'0');
				cout<<g<<endl;
				cout<<g[2]<<g[1]<<g[0]<<endl;
			}
			if(j/i==n&&j%i==0){
				g.clear();
				find_c(j+'0');
				find_c('/');
				find_c(i+'0');
				cout<<g<<endl;
			}
		}
	}
}

