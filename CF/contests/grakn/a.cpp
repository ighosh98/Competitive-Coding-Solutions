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
	FAST_IO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll a[n], b[n], c[n];
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		for (ll i = 0; i < n; i++)
			cin >> b[i];
		for (ll i = 0; i < n; i++)
			cin >> c[i];

		ll res[n] = {0};
		res[0] = a[0];
		for (ll i = 1; i < n - 1; i++)
		{
			if (a[i] != res[i - 1])
			{
				res[i] = a[i];
			}
			else
				res[i] = b[i];
		}
		if (res[n - 2] != a[n - 1] and a[n - 1] != res[0] )
			res[n - 1] = a[n - 1];
		else if (res[n - 2] != b[n - 1] and b[n - 1] != res[0] )
			res[n - 1] = b[n - 1];
		else if (res[n - 2] != c[n - 1] and c[n - 1] != res[0] )
			res[n - 1] = c[n - 1];

		for (ll i = 0; i < n; i++)
			cout << res[i] << ' ';
		cout << endl;
	}
}
/*
*/