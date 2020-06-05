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
	ll t ;
	cin >> t;
	while (t--)
	{
		ll n0, n1, n2;
		cin >> n0 >> n1 >> n2;
		string ans = "";
		if (n2 > 0)
		{
			for (ll i = 0; i <= n2; i++)
			{
				ans += '1';
			}
		}
		if (n0 > 0)
		{
			for (ll i = 0; i <= n0; i++)
			{
				ans += '0';
			}
			if (n2 > 0)
			{
				n1--;
			}
		}
		if (ans.length() == 0)
		{
			ans += '1';
		}
		ll start  = 0;
		if (n0 > 0)
		{
			start = 1;
		}
		for (ll j = 0; j < n1; j++)
		{
			ans += (start + '0');
			if (start)
				start = 0;
			else
				start = 1;
		}
		cout << ans << endl;
	}

}
//answer exists
/*
restore a suitable string with n0 n1 and n2
*/