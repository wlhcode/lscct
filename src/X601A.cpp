#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[100005];
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m=0,k=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>0) arr[i]+=arr[i-1];
		m=min(arr[i]-k,m);
		k=max(k,arr[i]);
	}
	int s=0,b=0;
	for(int i=0;i<n;i++){
		s=max(arr[i]-b,s);
		b=min(b,arr[i]);
	}
	cout<<max(s,arr[n-1]-m)<<endl;
}

