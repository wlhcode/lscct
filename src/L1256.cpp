#include<bits/stdc++.h>
#define ll long long
ll arr[10005];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,sofar=1,alltime=1;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	if(n<=2){
		cout<<n<<endl;
		return 0;
	}
	for(int i=0;i<n-1;i++){
		ll seq=arr[i+1]-arr[i];
		if(seq<=0) continue;
		while(arr[i+1]-arr[i]==seq&&i<n-1){
			sofar++;
			i++;
		}
		alltime=max(alltime,sofar);
//		cout<<sofar<<endl;
		sofar=1;
		i--;
	}
	cout<<alltime<<endl;
}

