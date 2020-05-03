#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=i;j>=1;j--){
			cout<<i;
			if(j-1>=1) cout<<" ";
		}
		for(int k=i+1;k<=n;k++){
			if(k==i+1) cout<<" ";
			cout<<k;
			if(k+1<=n) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
