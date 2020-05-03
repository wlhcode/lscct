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
		m=max(arr[i]-k,m);
		k=min(k,arr[i]);
	}
	cout<<m<<endl;
}

