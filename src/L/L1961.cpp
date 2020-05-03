#include<bits/stdc++.h>
using namespace std;
char s[20];
#define ll long long
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	int c=0;
	for(int i=0;i<8;i++){
		if(i<=1) c+=(9-i)*(s[i]-'A'+10);
		else c+=(9-i)*(s[i]-'0');
	}
	cout<<s<<"("<<c%10<<")"<<endl;
	return 0;
}

