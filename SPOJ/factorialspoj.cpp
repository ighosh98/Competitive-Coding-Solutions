#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll z(int n)
{
	ll ans=0;
	ll x =0;
	while(floor(n/pow(5,x)) > 0)
	{
		ans = ans + floor(n/pow(5,x)) ;
		x++; 
		//cout << ans <<endl;

	}

	return (ans-n);

}
int main()
{
	ll t, a;
	cin >> t;
	while (t--)
	{
		cin >> a;
		cout << z(a) << endl;
	}
}