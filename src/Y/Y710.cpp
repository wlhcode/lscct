#include<bits/stdc++.h>
#include<map>
using namespace std;
#define ll long long
ll arr[1000005];
unordered_map<ll, ll> freq;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, m, s;
	cin >> n >> m >> s;
	for(ll i = 0; i < n; ++i)
		cin >> arr[i];
	for(ll i = 0; i < m; ++i){
		ll x; cin >> x;
		freq[x]++;
	}
	ll cnt = 0;
	for(ll i = 0; i < n; ++i){
		ll tmp = arr[i];
		ll target = s - arr[i];
//		cout << freq[target] << ' ' << i << endl;
		if(freq.count(target)) cnt += freq[target];
	}
	cout << cnt << endl;
}
