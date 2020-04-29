#include<bits/stdc++.h>
#define ld long double
using namespace std;
string s[300];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int index=0;
	while(cin>>s[index]) index++;
	for(int i=index-1;i>=0;i--) cout<<s[i]<<endl;
	return 0;
}

