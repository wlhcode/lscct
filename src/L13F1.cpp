#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
char s[5];
void add(){
	s[4]++;
	if(s[4]>'9'){
		s[3]++;
		s[4]='0';
	}
	if(s[3]>='6'){
		s[3]='0';
		s[1]++;
	}
	if(s[1]>'9'){
		s[1]='0';
		s[0]++;
	}
	if(s[0]=='2'&&s[1]=='4'){
		s[0]='0';
		s[1]='0';
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	add();
	while(s[0]!=s[4]||s[1]!=s[3]) add();
	cout<<s<<endl;
	return 0;
}

