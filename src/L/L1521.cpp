#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,z=0;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v.push_back(t);
		if(t==100) z++;
	}
	if(m/7>n-z) cout<<99*(n-z)+100*z<<endl;
	else{
		sort(v.begin(),v.end());
		while(m>0){
			if(v[0]>=99) break;
			int q=(v[0]+100)/2;
			v.erase(v.begin());
			v.insert(lower_bound(v.begin(),v.end(),q),q);
			m--;
		}
		int a=0;
		for(int i=0;i<n;i++) a+=v[i];
		cout<<a<<endl;
	}
}
