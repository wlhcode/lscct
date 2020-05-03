#include<bits/stdc++.h>
#define ll long long
char s[150];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin.getline(s,sizeof(s));
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'){
			if(i==0) cout<<char(s[i]+'A'-'a');
			else if(s[i-2]=='.') cout<<char(s[i]+'A'-'a');
			else cout<<s[i];
		}
		else cout<<s[i];
	}
	cout<<endl;
	return 0;
}

