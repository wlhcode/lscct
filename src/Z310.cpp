#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	getline(cin,s);
	cout<<s.length()<<endl;
	int word=1,capt=0,punt=0;
	for(int i=0;i<s.length();i++){
		if(s.at(i)==' ') word++;
		if(s.at(i)<='Z'&&s.at(i)>='A') capt++;
		if(s.at(i)==','||s.at(i)=='.'||s.at(i)=='!'||s.at(i)==39) punt++;
	}
	cout<<word<<endl<<capt<<endl<<punt<<endl;
	return 0;
}

