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
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll ans = 0;
		bool used[n] = {false};
		//highest 1 bit will decide the answer
		for (ll j = 29; j >= 0; j--)
		{
			ll cnt = 0;
			for (ll i = 0; i < n; i++)
			{
				if (a[i] >= (1 << j) and !used[i])
				{
					used[i] = true;
					cnt++;
				}
			}
			ans += cnt * (cnt - 1) / 2;
		}
		cout << ans << endl;
	}
}
