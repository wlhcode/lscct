#include<bits/stdc++.h>
using namespace std;
string s;
string c;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin,s);
	c+=s;
	int b;
	char o,n;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>o>>n;
		for(int j=0;j<s.length();j++){
			if(s.at(j)==o) c.at(j)=n;
		}
	}
	cout<<c<<endl;
}

