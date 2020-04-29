#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s[32];
	int t;
	cin>>t>>s;
	int dec=0,len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]<58&&s[i]>47) s[i]-=48;
		else if(s[i]<91&&s[i]>64) s[i]-=55;
	}
	for(int i=len-1;i>=0;i--){
		dec+=s[i]*pow(t,len-1-i);
	}
	cout<<dec<<endl;
	return 0;
}

