#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[105][105];
int dp[105][105];
int n;
main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++) cin>>arr[j][i];
	}
	dp[1][1]=arr[1][1];
	int m=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[j][i]=max(dp[j][i-1],j>1?dp[j-1][i-1]:-1)+arr[j][i];
			if(i==n) m=max(dp[j][i],m);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++) cout<<dp[j][i]<<" ";
//		cout<<endl;
//	}
	cout<<m<<endl;
}
