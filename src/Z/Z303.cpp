#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	for(int i=0;i<s.length()/5;i++){
		for(int j=i;j<s.length();j+=s.length()/5) cout<<s.at(j);
	}
	cout<<endl;
	return 0;
}

