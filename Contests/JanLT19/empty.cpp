#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		string x;
		int a[n];
		cin >> x;
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			a[i] = x[i]-48;
			
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
				{
					flag = 1;
					break;
				}
		}
		if(!flag)
		{
			if(n%2)
			cout << (n/2)+1;
		else
			cout << n/2;
		}
		else{
		ll count = 0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				if(a[i+1]==0)
					{
						count++;
						a[i] =1;
					}
			}
			else
			{
				if(a[i-1]==0 && a[i+1]==0 && a[i]!=1 && i<n-1)
				{
					a[i] = 1;
					count++;
				}
				else if(i==n-1 && a[i-1] == 0 && a[i]!=1)
				{
					a[i] = 1;
					count++;
				}
			}
		}
		cout << count<<"\n";
	}
	}
	
}