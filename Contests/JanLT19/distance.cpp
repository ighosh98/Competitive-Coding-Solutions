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
		ll a[n], b[n];
		for( ll i=0;i<n;i++)
		{
			cin >> a[i];		
		}

		for(ll i=0;i<n;i++)
		{
			cin >> b[i];		
		}
		int flag= 0;
		if((a[n-1]!=b[0]) || a[0]!=0 || b[n-1]!=0)
		{
			flag = 1;
		}
			for(int i=0;i<n;i++)
			{
				if((a[i]==0 && i!=0) || (b[i]==0 && i!=n-1))
					flag = 1;

				else if((a[i]+b[i]<a[n-1])  || (a[i]+b[0]<b[i]) || (b[i]+a[n-1] < a[i]))
					flag = 1;

			}
			if(flag)
			{
				printf("No\n");
			}
			else
			{
				printf("Yes\n");
			}

	}

}



