#include<bits/stdc++.h>
#define ll long long
char s[10];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	gets(s);
	char c=0;
	for(int i=0;i<8;i++){
		if(s[i]=='|') c+=pow(2,7-i);
	}
	cout<<c<<endl;
	return 0;
}

