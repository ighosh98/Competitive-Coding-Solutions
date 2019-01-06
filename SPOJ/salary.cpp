#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);	
	ll t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll a[n];
		ll sum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum+= a[i];
		}
		sort(a,a+n);
		cout << sum-(n*a[0])<<endl;
	}
}