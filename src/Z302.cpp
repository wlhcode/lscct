#include<bits/stdc++.h>
#define ll long long
char s[250];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin.getline(s,sizeof(s));
	int len=strlen(s);
	int endplace;
	for(int i=len-1;i>=0;i--){
		if(s[i]=='.'){
			endplace=i;
			break;
		}
	}
	for(int i=endplace-1;i>=0;i--) cout<<s[i];
	for(int i=endplace;i<len;i++) cout<<s[i];
	cout<<endl;
	return 0;
}

