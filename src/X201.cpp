#include<bits/stdc++.h>
using namespace std;
int n,c=0;
bool used(string q,char b){
	for(int i=0;i<q.length();i++){
		if(q[i]==b) return 1;
	}
	return 0;
}
bool diagonal(string q,char b){
	for(int i=0;i<q.length();i++){
		if(abs(b-q[i])==abs(q.length()-i)) return 0;
	}
	return 1;
}
void recursion(string s){
	if(s.length()==n){
		if(c<3){
			for(int i=0;i<n-1;i++) cout<<int(s[i]-'0')<<" ";
			cout<<int(s[n-1]-'0')<<endl;
		}
		c++;
		return;
	}
	for(char i='1';i<='0'+n;i++){
		if(diagonal(s,i)&&!used(s,i)) recursion(s+string(1,i));
	}
	return;
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(char i='1';i<='0'+n;i++) recursion(string(1,i));
	cout<<c<<endl;
}

