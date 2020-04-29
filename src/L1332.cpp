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
	getline(cin,s);
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		int scount=1,index=-1;
		while(scount<q){
			index++;
			if(s.at(index)==' ') scount++;
		}
		//cout<<index<<s.length();
		for(int j=index+1;s.at(j)!=' '&&j<s.length();j++){
			cout<<s.at(j);
			if(j+1>=s.length()) break;
		}
		cout<<endl; 
	}
	return 0;
}

