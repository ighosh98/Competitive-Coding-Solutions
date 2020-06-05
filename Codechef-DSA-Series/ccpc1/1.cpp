#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
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
		ll n; string s;
		cin >> n;
		cin >> s;
		// a shoots first and then b shoots
		//find the smallest value after which you would know the results of the shootout
		ll a = 0, b = 0;
		ll ans = 2 * n;
		ll ashots = n, bshots = n;
		for (ll i = 0; i < 2 * n; i++)
		{
			if (i % 2 == 0)
			{
				if (s[i] == '1')
					a++;
				ashots--;
			}
			else
			{
				if (s[i] == '1')
					b++;
				bshots--;

			}
			//	cout << a << ' ' << b << ' ' << ashots << ' ' << bshots << endl;
			if ((a - b > bshots) || (b - a > ashots))
			{
				ans = i + 1;
				//cout << ans << endl;
				break;
			}

		}
		cout << ans << endl;

	}
}
//TBD check the bounds once