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
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		if (k == 1)
		{
			bool ok = true;
			for (ll i = 0; i < n - 1; i++)
			{
				if (a[i] != a[i + 1])
					ok = false;
			}
			if (ok)
				cout << 1 << endl;
			else
				cout << -1 << endl;
		}
		else
		{
			ll prev = -1;
			ll cnt = 1;
			set<ll>st;
			ll i = 0;
			for (i = 0; i < n; i++)
			{
				st.insert(a[i]);
				if (st.size() > k)
				{
					for (ll j = i; j < n; j++)
					{
						a[j] -= prev;
					}
					break;
				}
				else
				{
					a[i] = 0;
				}
				prev = a[i];
			}
			while (i < n)
			{
				set<ll>st1;
				st1.insert(0);
				while ( i < n and st1.size() <= k )
				{
					st1.insert(a[i]);
					if (st1.size() > k)
					{
						for (ll j = i; j < n; j++)
						{
							a[j] -= prev;
						}
						break;
					}
					else
					{
						a[i] = 0;
					}
					i++;
				}
				cnt++;
			}
			cout << cnt << endl;
		}
	}
}
