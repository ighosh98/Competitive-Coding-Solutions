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
		ll ans = 0;
		ll i = 0;
		bool me = false;
		while (i < n)
		{
			if (!me)
			{
				if (i == n - 1)
				{
					if (a[i] == 1) {
						ans++;
					}
					i++;

				}
				else if (a[i] == 1 and i < n - 1)
				{
					ans++;
					if (i + 1 < n and a[i + 1] == 0)
					{
						i += 2;
					}
					else {
						i++;
					}
				}
				else if (a[i] == 0 and i < n - 1)
				{
					if (i + 1 < n and a[i + 1] == 0)
					{
						i += 2;
					}
					else
						i++;

				}
			}
			else
			{
				if (i == n - 1)
					i++;
				else if (a[i] == 1 and i < n - 1)
				{
					if (i + 1 < n and a[i + 1] == 1)
					{
						i += 2;
					}
					else if (i + 1 < n and a[i + 1] == 0)
					{
						i++;
					}

				}
				else if (a[i] == 0 and i < n - 1)
				{
					if (i + 1 < n and a[i + 1] == 1)
					{
						i += 2;
					}
					else if (i + 1 < n and a[i + 1] == 0)
					{
						i++;
					}
				}
			}
			me = !me;
		}
		cout << ans << endl;
	}
}
