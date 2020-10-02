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
		ll n, m;
		cin >> n >> m;
		bool ok = true;
		ll a[n][2][2];
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < 2; j++)
			{
				for (ll k = 0; k < 2; k++)
					cin >> a[i][j][k];
			}
		}
		if (m % 2 == 1) {
			cout << "NO\n";
		}
		else {
			ok = false;
			for (ll i = 0; i < n; i++)
			{
				ok = ok or (a[i][0][1] == a[i][1][0]);
			}

			if (ok)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

}
