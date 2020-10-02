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
		ll n;
		cin >> n;
		ll a[n];
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll zero = 0;
		for (ll i = 0; i < n; i++) {
			if (a[i] == 0)
				zero++;
		}
		if (n - zero < 5) {
			cout << 0 << endl;
		}
		else {
			sort(a, a + n);
			ll ans = 1;
			for (ll i = 0; i < 5; i++)
			{
				ans *= a[n - i - 1];
			}
			ans = max(ans, a[n - 1] * a[n - 2] * a[n - 3] * a[0] * a[1]);
			ans = max(ans, a[n - 1] * a[2] * a[3] * a[0] * a[1]);
			cout << ans << endl;
		}
	}
}