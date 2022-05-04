class SegTree {
	vector<ll>seg;
	vector<ll>lazy;
public:
	SegTree(ll n) {
		seg.resize(4 * n + 1);
		lazy.resize(4 * n + 1);
	}
	void build(ll index, ll lo, ll hi) {
		if (lo == hi) {
			seg[lo] = a[lo];
			return;
		}
		ll mid = (lo + hi) / 2;
		build(2 * index + 1, lo, mid);
		build(2 * index + 2, mid + 1, hi);
		seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);
		return;
	}
	ll findMaxQuery(int index, int lo, int hi, int l, int r) {
		if (lo >= l and hi <= r) {
			return seg[index];
		}
		// not in range
		if (l > hi or r < lo) {
			return INT_MIN;
		}
		// partial overlap
		ll mid =  (lo + hi) / 2;
		return max(findMaxQuery(2 * index + 1, lo, mid, l, r), findMaxQuery(2 * index + 2, mid + 1, hi, l, r));
	}
	void pointUpdate(ll index, int lo, int hi, int pos, int value) {
		if (lo == hi) {
			seg[pos] = value;
		}
		ll mid = (hi + lo) / 2;
		if (pos <= mid) {
			//
			pointUpdate(2 * index + 1, lo, mid, pos, value);
		} else {
			pointUpdate(2 * index + 2, mid + 1, hi, pos, value);
		}
		seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);
		return;
	}
	// range updates
	/**
	 * Idea: create a lazy array which updates values only
	 * when there is a need for the update
	 * so we do not update value for lower levels than what we need to do
	 */
	void rangeUpdate(ll index, ll lo, ll hi, ll left, ll right, ll value) {
		// O(logn)
		if (lazy[index] != 0) {
			// update lazy if updates are pending
			seg[index] = max(lazy[index], seg[index]);
			if (lo != hi) {
				// postpone update for children
				lazy[2 * index + 1] = max(lazy[2 * index + 1], lazy[index]);
				lazy[2 * index + 2] = max(lazy[2 * index + 2], lazy[index]);
			}
			lazy[index] = 0;
		}
		// if outside range -> return
		if (left > hi or right < lo) {
			return;
		}
		if (lo >= left and hi <= right) {
			// perfect overlap
			seg[index] = max(seg[index], value);
			if (lo != hi) {
				// postpone update for lower
				lazy[2 * index + 1] = max(lazy[2 * index + 1], lazy[index]);
				lazy[2 * index + 2] = max(lazy[2 * index + 2], lazy[index]);
			}
		}
		// partial overlap
		ll mid = (lo + hi) / 2;
		rangeUpdate(index, lo, mid, left, right, value);
		rangeUpdate(index, mid + 1, hi, left, right, value);
		seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);
	}
};