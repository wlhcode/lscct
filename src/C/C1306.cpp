#include<bits/stdc++.h>
#define ll long long
char s[10];
using namespace std;
bool repeat(){
	int t=strlen(s);
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			if(s[i]==s[j]) return true;
		}
		if(s[0]-'0'==10&&s[i]<='1') return true;
	}
	return false;
}
void stradd(){
	int t=strlen(s);
	s[t-1]++;
	for(int i=t-1;i>=1;i--){
		if(s[i]>'9'){
			s[i]='0';
			s[i-1]++;
		}
		else break;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	stradd();
	while(repeat()) stradd();
	int t=strlen(s);
	bool lead0=true;
	for(int i=0;i<t;i++){
		if(s[i]!='0') lead0=false;
		if(!lead0) cout<<int(s[i]-'0');
	}
	cout<<endl;
	return 0;
}

