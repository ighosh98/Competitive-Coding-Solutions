#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	ll a[n],b[m];
	ll mina_value, mina_index;
	ll maxb_value,maxb_index;
	for(ll i=0;i<n;i++)
	{
		cin >> a[i];
		if(i==0)
		{
			mina_value = a[i];
			mina_index = 0;
		}
		else
		{
			if(mina_value>a[i])
			{
				mina_index = i;
				mina_value = a[i];
			}
		}
	}
	for(ll i = 0;i<m;i++)
	{
		cin >> b[i];
		if(i==0)
		{
			maxb_index = i;
			maxb_value = b[i];
		}
		else
		{
			if(maxb_value>b[i])
			{
				maxb_value = b[i];
				maxb_index = i;
			}
		}
	}
	//ll count = 0;
	for(ll i =0;i<m;i++)
	{
		cout << mina_index <<" " << i << endl;
	}
	for(ll i =0;i<n;i++)
	{
		if(i != mina_index)
		{
			cout << i << " " << maxb_index  << endl; 
		}
	}
	return 0;
}

