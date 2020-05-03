#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[100005];
ll sum[100005]={0};
int main(){
	ll n,q;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
		sum[i]=sum[max(0,i-1)]+arr[i];
		//cout<<sum[i]<<" ";
	}
	cin>>q;
	for(int i=0;i<q;i++){
		ll l,r;
		scanf("%lld%lld",&l,&r);
		l-2>=0 ? printf("%lld\n",sum[r-1]-sum[l-2]) : printf("%lld\n",sum[r-1]);
	}
	return 0;
}

