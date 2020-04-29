#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s[55];
	cin>>s;
	int cow[30]={0};
	int len=strlen(s);
	for(int i=0;i<len;i++) cow[s[i]-'A']++;
	for(int i=0;i<26;i++){
		char lck=i+'A';
		if(cow[i]!=0) cout<<lck<<" "<<cow[i]<<endl; 
	}
	return 0;
}

