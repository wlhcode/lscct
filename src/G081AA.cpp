#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
	vector<int> x;
	vector<int> y;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int l,q,m=0;
		cin>>l;
		for(int j=0;j<l;j++){
			cin>>q;
			x.push_back(q);
		}
		for(int j=0;j<l;j++){
			cin>>q;
			y.push_back(q);
		}
		sort(x.begin(),x.end());
		sort(y.rbegin(),y.rend());
		for(int j=0;j<l;j++) m+=x.at(j)*y.at(j);
		x.clear();
		y.clear();
		cout<<"Case #"<<i+1<<": "<<m<<endl;
	}
}
