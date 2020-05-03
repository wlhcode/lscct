#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool arr[20];
ll n;
void recursion(ll tmp, ll len){
	if(len == n){
		cout << tmp << endl;
		return;
	}
	for(ll i = 1; i <= n; ++i){
		if(arr[i]) continue;
		arr[i] = true;
		recursion(tmp*10 + i, len + 1);
		arr[i] = false;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	recursion(0,0);	
}
