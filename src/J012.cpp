#include<bits/stdc++.h>
using namespace std;
int con(string a,int t){
	int n=0,m=1;
	if(t!=-1){
		if(a[t]=='1') a[t]='0';
		else a[t]='1';
	}
	while(!a.empty()){
		if(a[a.length()-1]=='1') n+=m;
		m*=2;
		a.erase(a.length()-1,1);
	}
	return n;
}
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin>>n>>s;
	bool arr[int(pow(2,n))+5];
	for(int i=0;i<pow(2,n);i++) arr[i]=0;
	cout<<s<<endl;
	arr[con(s,-1)]=1;
	for(int i=1;i<pow(2,n);i++){
		for(int j=0;j<n;j++){
			if(!arr[con(s,j)]){
				if(s[j]=='1') s[j]='0';
				else s[j]='1';
				arr[con(s,-1)]=1;
				break;
			}
		}
		cout<<s<<endl;
	}
}

