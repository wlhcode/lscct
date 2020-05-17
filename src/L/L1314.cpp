#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[200005], ps[200005], seg[800005], lazy[800005];
int n, m, k;

int build_seg (int seg_l = 1, int seg_r = n - k + 1, int seg_i = 1) {
	if (seg_l == seg_r) {
		seg[seg_i] = ps[seg_l];
		return seg[seg_i];
	}
	int seg_m = (seg_l + seg_r) / 2;
	seg[seg_i] = max(build_seg(seg_l, seg_m, seg_i * 2), build_seg(seg_m + 1, seg_r, seg_i * 2 + 1));
	return seg[seg_i];
}

void update (int req_l, int req_r, int req_v, int seg_l = 1, int seg_r = n - k + 1, int seg_i = 1) {
	if (req_l == seg_l && req_r == seg_r) {
		seg[seg_i] += req_v;
		lazy[seg_i] += req_v;
		return;
	}
	int seg_m = (seg_l + seg_r) / 2;
	if (lazy[seg_i] != 0) {
		seg[seg_i * 2] += lazy[seg_i];
		seg[seg_i * 2 + 1] += lazy[seg_i];
		lazy[seg_i * 2] += lazy[seg_i];
		lazy[seg_i * 2 + 1] += lazy[seg_i];
		lazy[seg_i] = 0;
	}
//	cout << seg_i << " ";
	if (req_l <= seg_m) update(req_l, min(req_r, seg_m), req_v, seg_l, seg_m, 2 * seg_i);
	if (req_r > seg_m) update(max(req_l, seg_m + 1), req_r, req_v, seg_m + 1, seg_r, 2 * seg_i + 1);
	seg[seg_i] = max(seg[seg_i * 2], seg[seg_i * 2 + 1]);
}

void swap_node (int x, int y) {
	if (x == y) return;
	int diff_x = arr[y] - arr[x], diff_y = arr[x] - arr[y];
	swap(arr[x], arr[y]);
//	cout << max(0, x - k + 1) << " " << min(x, n - k + 1);
	update(max(1LL, x - k + 1), min(x, n - k + 1), diff_x);
	update(max(1LL, y - k + 1), min(y, n - k + 1), diff_y);
}

void change_node (int x, int v) {
	int diff_x = v - arr[x];
	arr[x] = v;
	update(max(1LL, x - k + 1), min(x, n - k + 1), diff_x);
}

int req_ans (int req_l, int req_r, int seg_l = 1, int seg_r = n - k + 1, int seg_i = 1) {
	if (req_l == seg_l && req_r == seg_r) return seg[seg_i];
	int seg_m = (seg_l + seg_r) / 2, maxans = INT_MIN;
	if (lazy[seg_i] != 0) {
		seg[seg_i * 2] += lazy[seg_i];
		seg[seg_i * 2 + 1] += lazy[seg_i];
		lazy[seg_i * 2] += lazy[seg_i];
		lazy[seg_i * 2 + 1] += lazy[seg_i];
		lazy[seg_i] = 0;
	}
	if (req_l <= seg_m) maxans = max(req_ans(req_l, min(req_r, seg_m), seg_l, seg_m, seg_i * 2), maxans);
	if (req_r > seg_m) maxans = max(req_ans(max(req_l, seg_m + 1), req_r, seg_m + 1, seg_r, seg_i * 2 + 1), maxans);
	return maxans;
}

int32_t main () {
//	ios::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	for (int i = 1; i <= n - k + 1; ++i) {
		if (i == 1) {
			int tmp = 0;
			for (int j = 1; j <= k; ++j) tmp += arr[j];
			ps[i] = tmp;
		}
		else ps[i] = ps[i - 1] - arr[i - 1] + arr[i + k - 1];
	}
	build_seg();
	for (int i = 0; i < m; ++i) {
		int p, x, y; cin >> p >> x >> y;
		switch (p) {
			case 0:
				change_node(x, y);
				break;
			case 1:
//				cout << "test";
				swap_node(x, y);
				break;
			case 2:
//				for (int z = 1; z <= 4 * n; ++z) cout << seg[z] << " ";
				cout << req_ans(x, y - k + 1) << endl;
				break;
		}
	}
}
