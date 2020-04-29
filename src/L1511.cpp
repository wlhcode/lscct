#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int arr[1005];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	if(arr[0]==1) cout<<"-1"<<endl;
	else cout<<"1"<<endl;
	return 0;
}

