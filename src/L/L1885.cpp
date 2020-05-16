#include <bits/stdc++.h>
using namespace std;

struct interval {
	int l, r;
};

vector <interval> v[500005];
int seg[2000005];
bool lazy[2000005];
long long c, r, q, area = 0;

int update_interval (int req_l, int req_r, int seg_l = 1, int seg_r = c, int seg_i = 1) {
	if (req_l == seg_l && req_r == seg_r) {
		int diff = req_r - req_l + 1 - 2 * seg[seg_i];
		seg[seg_i] += diff;
		lazy[seg_i] = !lazy[seg_i];
//		cout << diff << endl;
		return diff;
	}
	int m = (seg_l + seg_r) / 2; 
	if (lazy[seg_i]) {
		lazy[seg_i] = false;
		lazy[2 * seg_i] = !lazy[2 * seg_i]; lazy[2 * seg_i + 1] = !lazy[2 * seg_i + 1];
		seg[2 * seg_i] = m - seg_l + 1 - seg[2 * seg_i];
		seg[2 * seg_i + 1] = seg_r - m - seg[2 * seg_i + 1];
	}
	int ogvalue = seg[seg_i];
	if (req_l <= m) seg[seg_i] += update_interval(req_l, min(req_r, m), seg_l, m, seg_i * 2);
	if (req_r > m) seg[seg_i] += update_interval(max(req_l, m + 1), req_r, m + 1, seg_r, seg_i * 2 + 1);
	return seg[seg_i] - ogvalue;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> c >> r >> q;
	for (int i = 0; i < q; ++i) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		v[y1].push_back(interval{x1, x2});
		v[y2 + 1].push_back(interval{x1, x2});
	}
	for (int i = 1; i <= r; ++i) {
		if (v[i].empty()) {
			area += seg[1];
			continue;
		}
//		cout << i << endl;
		for (interval j : v[i]) {
			update_interval(j.l, j.r);
//			for (int k = 1; k < 4 * c; ++k) cout << seg[k] << " ";
//			cout << endl;
		}
		area += seg[1];
	}
	cout << area << endl;
}
