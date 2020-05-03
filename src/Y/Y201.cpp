#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> v, v2, output;
int main(){
	 ios::sync_with_stdio(false);
	 cin.tie(0);
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		v.pb(x);
	}
	int m; cin >> m;
	for(int i = 0; i < m; ++i){
		int x; cin >> x;
		v2.pb(x);
	}
	sort(v.begin(),v.end(),greater<int>());
	sort(v2.begin(),v2.end(),greater<int>());
	int ptr = 0, ptr2 = 0;
	for(int i = 0; i < n + m; ++i){
		bool ok = 0;
		if(ptr == n){
			output.pb(v2[ptr2]);
			ptr2++;
			ok = 1;
		}else if(ptr2 == m){
			output.pb(v[ptr]);
			ptr++;
			ok = 1;
		}
		if(ok) continue;
		if(v[ptr] > v2[ptr2]) {
			output.pb(v[ptr]);
			ptr++;
		}
		else{
			output.pb(v2[ptr2]);
			ptr2++;
		}
	}
	cout << n + m << endl;
	for(int i = 0; i < output.size(); ++i){
		cout << output[i] << (i + 1 == output.size() ? '\n' : ' ');
	}
}
