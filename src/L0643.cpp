#include<bits/stdc++.h>
using namespace std;
char b[30];
int a[30];
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	int v=0;
	for(int i=2;i<s.length();i+=2){
		b[v]=s.at(i);
		v++;
	}
	cin>>s>>s;
	for(int i=0;i<v;i++) cin>>a[i];
	int ans=0;
	bool plus=true;
	if(s.at(0)=='-'){
		s.erase(0,1);
		plus=false;
	}
	for(int i=0;i<s.length();i++){
		int num;
		for(int j=0;j<v;j++){
			if(b[j]==s.at(i)) num=a[j];
		}
		if(plus) ans+=num;
		else ans-=num;
		i++;
		if(i>=s.length()) break;
		if(s.at(i)=='+') plus=true;
		else plus=false;
	}
	cout<<ans<<endl;
}

