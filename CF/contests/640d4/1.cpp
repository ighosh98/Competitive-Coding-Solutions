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

	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> ans;
		ll x = 0;
		while (n > 0)
		{
			ll temp = n % 10;
			if (temp != 0)
				ans.push_back(temp * pow(10, x));
			x++;
			n /= 10;
		}
		cout << ans.size() << endl;
		for (ll i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << endl;
	}
}
