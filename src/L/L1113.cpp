#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		cout<<int(s.at(i));
		i+1>=s.length() ? cout<<endl : cout<<" ";
	}
	return 0;
}

