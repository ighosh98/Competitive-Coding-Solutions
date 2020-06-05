// Link: https://www.codechef.com/LRNDSA04/problems/LOWSUM
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
	FAST_IO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll k, x;
		cin >> k >> x;
		ll a[k], b[k];
		for (ll i = 0; i < k; i++)
			cin >> a[i];
		for (ll i = 0; i < k; i++)
			cin >> b[i];
		sort(a, a + k);
		sort(b, b + k);
		priority_queue<ll>pq;
		for (ll i = 0; i < k; i++)
		{
			for (ll j = 0; j < k; j++)
			{
				if (pq.size() <= 10000)
				{
					pq.push((a[i] + b[j]));
				}
				else if (a[i] + b[j] < pq.top())
				{
					pq.pop();
					pq.push(a[i] + b[j]);
				}
				else
					break;
			}
		}

		vector<ll> ans;
		while (!pq.empty())
		{
			ans.eb( pq.top());
			pq.pop();
		}
		reverse(ans.begin(), ans.end());
		/*		for (ll i = 0; i < ans.size(); i++)
					cout << ans[i] << ' ';
		*/		
		ll q;
		for (ll i = 0; i < x; i++)
		{
			cin >> q;
			cout << ans[q - 1] << endl;
		}
	}
}
