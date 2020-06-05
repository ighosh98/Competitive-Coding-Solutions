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
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FAST_IO;
	ll t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll a[n];
		ll ans = 0;
		for (int i = 0; i < n; i++ )
		{
			cin >> a[i];
			freq[a[i]]++;
			st.insert(a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			ll sum = a[i];
			for (int j = 1; i + j < n; j++)
			{
				sum += a[i + j];
				if (st.find(sum) != st.end())
				{
					ans += freq[sum];
					st.erase(sum);
				}
			}
		}
		cout << ans << endl;

	}
}
