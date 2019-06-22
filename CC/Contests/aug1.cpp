#include <bits/stdc++.h>
using namespace std;
#define MOD  1000000007
typedef long long ll;
/*ll gcd(ll a ,ll b)
{
	if(a!=0)
		return b;
	else 
		return(b%a,a);
} */
ll power_mod( ll a,ll n)
{
	if(n == 0 )
		return 1;
	ll temp = pow(a,n/2);
	ll rem = (((temp % MOD)*(temp%MOD))%MOD);
	if(n%2 == 1)
		rem = ((a%n)*(rem%n))%n;
	return rem;
}
ll max_gcd(ll a , ll b, ll n)
{
	ll ans = 0;
	ll x = 2;
	for(int i=0;i<=abs(a-b);i++)
	{
		if (n == 0)
		{
			ans = min(abs(a-b),x);
			break;
		}
		if((a-b)%i == 0)
		{

			if((power_mod(a,i)+power_mod(b,i))%i == 0 && i > ans)
			{
				ans = i;
			}
		}
	}
	return ans;
}
int main()
{
	ll t,a ,b ,n;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> n;
		cout << max_gcd(a,b,n);
	}
}