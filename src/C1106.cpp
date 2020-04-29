#include<bits/stdc++.h>
#define ll long long
char str[105];
using namespace std;
int main(){
	int n,t=0,s=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		gets(str);
		int len=strlen(str);
		for(int j=0;j<len;j++){
			if(str[j]=='T'||str[j]=='t') t++;
			else if(str[j]=='S'||str[j]=='s') s++;
		}
	}
	if(t>s) cout<<"English"<<endl;
	else cout<<"French"<<endl;
	return 0;
}

