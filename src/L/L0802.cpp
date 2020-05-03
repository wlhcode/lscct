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
char s[50];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		int q=0;
		if(s[i]>=48&&s[i]<=57){
			int p=s[i]-48;
			for(int j=0;p>0;j++){
				q+=(p%2)*pow(10,j);
				p/=2;
			}
			cout<<setfill('0')<<setw(4)<<q;
		}
		else{
			int p=s[i]-64;
			for(int j=0;p>0;j++){
				q+=(p%2)*pow(10,j);
				p/=2;
			}
			cout<<"11"<<setfill('0')<<setw(6)<<q;
		}
	}
	cout<<endl;
	return 0;
}

