#include<bits/stdc++.h>
#define int long long
using namespace std;
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		s=max(s,x+y);
	}
	cout<<s<<endl;
}
