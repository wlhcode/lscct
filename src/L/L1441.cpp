#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
string b;
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
	stack<char> s;
	cin>>b;
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		s.push(b.at(q));
		for(int j=q+1;!s.empty();j++){
			if(s.top()==b.at(j)-2||s.top()==b.at(j)-1) s.pop();
			else s.push(b.at(j));
			if(s.empty()) cout<<j<<endl;
		}
	}
	return 0;
}

