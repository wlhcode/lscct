#include "bits/stdc++.h" 
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for(int z = 0; z < t; z++) {
        string s; cin >> s;
        bool sw[s.length() + 5];
        memset(sw, 0, s.length());
        int l = 0, r = s.length() - 1, cnt = 0;
        while(l < r) {
            if(s[l] == s[r]) {
                l++; r--;
                continue;
            }
            if(r == l + 1) {
                cnt = -1;
                break;
            }
            else if(!sw[l] && s[l+1] == s[r]) {
            	char temp = s[l];
            	s[l] = s[l+1];
            	s[l+1] = temp;
                sw[l] = 1; sw[l+1] = 1;
            }
            else if(!sw[r] && s[r-1] == s[l]) {
            	char temp = s[r];
            	s[r] = s[r-1];
            	s[r-1] = temp;
                sw[r] = 1; sw[r-1] = 1;
            }
            else {
                cnt = -1;
                break;
            }
            l++; r--; cnt++;
        }
        if(cnt == -1) cout << "Poor Alice" << endl;
        else cout << cnt << endl;
    }
}
