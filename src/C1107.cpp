#include<bits/stdc++.h>
#define ll long long
char s[10005];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,g=0;
	char ans;
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		cin>>ans;
		if(s[i]==ans) g++;
	}
	cout<<g<<endl;
	return 0;
}

