#include<bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;
int arr[101];
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>arr[i];
	int q=-1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]>q&&arr[i]+arr[j]<=m) q=arr[i]+arr[j];
		}
	}
	cout<<q<<endl;
}

