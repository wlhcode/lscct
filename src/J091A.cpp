#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<pair<int, int> > v;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	cin>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	int q=0,z=0;
	int arr[2*n+2*m+5];
	while(q<v.size()){
		int a=v[q].first,b=v[q].second;
		while(b+1>=v[q+1].first){
			q++;
			b=max(v[q].second,b);
			if(q+1>=v.size()) break;
		}
		arr[z]=a;
		arr[z+1]=b;
		z+=2;
		q++;
	}
	cout<<z/2<<endl;
	for(int i=0;i<z;i+=2) cout<<arr[i]<<" "<<arr[i+1]<<endl;
}
