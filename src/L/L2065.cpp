#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, k;
    cin >> n >> x >> k;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        int xi, wi;
        cin >> xi >> wi;
        v.push_back(make_pair(xi, wi));
    }
    sort(v.begin(), v.end());
    int pf[n + 5], pd[n + 5];
    int * ps = & pd[1];
    ps[-1] = 0;
    for (int i = 0; i < n; i++) {
        pf[i] = v[i].first;
        ps[i] = ps[i - 1] + v[i].second;
    }
    ps[n] = ps[n - 1];
    int s = upper_bound(pf, pf + n, x) - pf;
    int m = 0;
    int l = 0, r = k, tmp = s - 1;
    do {
        int bl = lower_bound(pf, pf + n, x - l) - pf - 1;
        int br = upper_bound(pf, pf + n, x - l + r) - pf - 1;
        if (x - l + r >= pf[n - 1]) br = n - 1;
        m = max(m, ps[br] - ps[bl]);
        if (tmp < 0) break;
        l = x - pf[tmp];
        r = k - l;
        tmp--;
    } while (l < r);
    r = 0, l = k, tmp = s;
    do {
        int br = upper_bound(pf, pf + n, x + r) - pf - 1;
        int bl = lower_bound(pf, pf + n, x + r - l) - pf - 1;
        if (x + r - 1 >= pf[n - 1]) br = n - 1;
        m = max(m, ps[br] - ps[bl]);
        if (tmp >= n) break;
        r = pf[tmp] - x;
        l = k - r;
        tmp++;
    } while (r < l);
    cout << m << endl;
}
