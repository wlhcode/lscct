#include<bits/stdc++.h>
#define ll long long
int s[1005][1005];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		for(int j=b-1;j<c;j++) s[i][j]=a;
	}
	int m=0;
	for(int i=0;i<1000;i++){
		for(int j=0;j<n;j++){
			s[1002][i]+=s[j][i];
		}
		if(m<s[1002][i]) m=s[1002][i];
	}
	cout<<m<<endl;
	return 0;
}

