#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll t;
ll n,p,ans;
cin >> t;
while(t--)
{
	ans = 0;
	cin >> n >> p;
//	cout << n;
	ll x = (n/2)+1;
	if(x<n)
	{
		ll	r = n%x;
		ans = (p-r)*(p-r) + (p-n)*(p-r)+(p-n)*(p-n);
	}
	else
	{
		ans = p*p*p;
	}
	cout << ans << endl;
}
}