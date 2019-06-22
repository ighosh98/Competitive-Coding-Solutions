//LTIME December Q2
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
		ll x;
		ll suf[n+1]={0};
		for(ll i = 1;i<=n;i++)
		{
			cin >> x;
			suf[i]= suf[i-1]+ x;
		}
		ll yb,mb,db;
		ll yc,mc,dc;
		ll leap = 0;
		cin >> yb >> mb >> db;
		cin >> yc >> mc >> dc;
		ll days = (yc-yb)*suf[n]+ (suf[mc-1]-suf[mb-1])+(dc-db+1);
	//	printf("x = %lld\n",(dc) );
	//	printf("%lld\n",days );


		for(int i = yb;i<yc;i++)
		{
			if(i%4==0)
				days++;
		}
		printf("%lld\n",days );		
	}
}