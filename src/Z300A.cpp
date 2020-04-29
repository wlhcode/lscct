#include<bits/stdc++.h>
#define ll long long
using namespace std;
char s[200];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	int n;
	char q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		int ans=0;
		for(int j=0;j<strlen(s);j++){
			if(s[j]==q) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

