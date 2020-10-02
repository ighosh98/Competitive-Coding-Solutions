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
		ll n; double l;
		cin >> n >> l;
		ll a[n + 5] = {0};

		for (ll i = 1; i <= n; i++)
			cin >> a[i];
		double left[n + 5] = {0}, right[n + 5] = {0};
		for (ll i = 1; i <= n; i++)
		{
			left[i] = left[i - 1] + (a[i] - a[i - 1]) * 1.0 / i;
		}
		right[n + 1] = 0;
		a[n + 1] = l;
		for (ll i = n; i > 0; i--)
		{
			right[i] = right[i + 1] + (a[i + 1] - a[i]) * 1.0 / (n - i + 1) ;
		}
		vector<double>temp;
		temp.eb(0);
		temp.eb(0);
		for (ll i = 1; i <= n; i++)
		{
			if (left[i] < right[i])
			{
				temp.eb(left[i]);
			}
			else
				temp.eb(right[i]);
		}
		sort(temp.begin(), temp.end());
		ll x = 0;
		for (ll i = 1; i < temp.size(); i++ )
		{
			l -= (temp[i] - temp[i - 1]) * (i);
		}
		cout.precision(10);
		cout << fixed << (temp.back() + l / temp.size()) << endl;

	}
}
