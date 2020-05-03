#include "bits/stdc++.h"
#define int long long
using namespace std;
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	multiset<int> s1,s2;
	int n,q=0;
	while(cin>>n){
		if(s2.empty()) s1.insert(n);
		else if(*s2.begin() > n) s1.insert(n);
		else s2.insert(n);
		q++;
		if (q % 2 == 0) {
			int k = q / 2;
			while (s1.size() > k) {
				s2.insert(*(--s1.end()));
				s1.erase(--s1.end());
			}
			while(s1.size() < k) {
				s1.insert(*s2.begin());
				s2.erase(s2.begin());
			}
			cout << (*(--s1.end()) + (*s2.begin())) / 2 << endl;
		}
		else{
			int k = q / 2 + 1;
			while (s1.size() > k) {
				s2.insert(*(--s1.end()));
				s1.erase(--s1.end());
			}
			while(s1.size() < k) {
				s1.insert(*s2.begin());
				s2.erase(s2.begin());
			}
			cout << *(--s1.end()) << endl;
		}
	}
	return 0;
}
