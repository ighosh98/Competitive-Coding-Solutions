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
		ll n, k;//k is the unlucky integer
		cin >> n >> k;
		ll a[n];
		map<ll, ll>black;
		map<ll, ll>white;
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
			black[a[i]] = 0;
			white[a[i]] = 0;
		}
		for (ll i = 0; i < n; i++)
		{
			if (((black[k - a[i]]) * (black[a[i]] + 1)) > ((white[k - a[i]]) * (white[a[i]] + 1)))
				white[a[i]]++;
			else
				black[a[i]]++;
		}
		ll res[n] = {0};
		for (ll i = 0; i < n; i++)
		{
			if ((black[a[i]] > 0)) {
				res[i] = 1;
				black[a[i]]--;
			}
			else if ((white[a[i]] > 0))
			{
				res[i] = 0;
				white[a[i]]--;
			}
		}
		for (ll i = 0; i < n; i++)
			cout << res[i] << ' ';
		cout << endl;
	}
}