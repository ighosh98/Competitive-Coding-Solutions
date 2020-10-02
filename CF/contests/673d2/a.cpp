#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define CPrint(c)  for(auto i:(c)) { cout<<i<<" "; } nl
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front
#define mp   make_pair
#define f first
#define s second
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		bool ok = true;
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > k)
				ok = false;
		}
		if (!ok)
			cout << 0 << endl;
		else {
			sort(a, a + n);
			ll x = a[0];
			ll cnt = 0;
			bool mark = false;
			for (ll i = 1; i < n; i++)
			{
				if ((k - a[i]) % x != 0)
				{
					cnt += (k - a[i]) / x ;
					mark = true;
				}
				else
					cnt += (k - a[i]) / x ;
			}
			cout << cnt << endl;
		}
	}

}
