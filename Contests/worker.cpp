#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	ll cost[n], type[n];
	for(ll i = 0 ;i<n;i++)
	{
		cin >> cost[i];
	}

	for(ll i = 0 ;i<n;i++)
	{
		cin >> type[i];

	}
	ll c1=0, c2=0,c3=0;
	for(ll i = 0 ;i< n ;i++)
	{
		if(type[i]== 1)
	{
		c1++;
	}
		else if(type[i]== 2)
	{
		c2++;
	}
	else
	{
		c3++;
	}
}
	ll a1[c1],a2[c2],a3[c3];
	ll track1=0, track2=0,track3=0;
	for(ll i =0 ;i<n; i++)
	{
		if(type[i ]== 1)
	{
		a1[track1] = cost[i];
		track1++;
	}
		else if(type[i ]== 2)
	{
		a2[track2] = cost[i];
		track2++;
			}
	else
	{
		a3[track3] = cost[i];
		track3++;
	}

	}
	 sort(a1,a1+c1);
	 sort(a2,a2+c2);
	sort(a3,a3+c3);
	if(c1==0 || c2==0)
	{
		cout << a3[0]<<endl;
	}
	else if(c3==0)
	{
		cout << a1[0]+a2[0]<< endl;
	}
	else if(a1[0]+a2[0]<= a3[0])
	{
		cout << a1[0]+a2[0]<< endl;
	}
	else
	{
		cout << a3[0]<<endl;
	}
	return 0;

}
