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
//debuggers
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
/*ll power(ll x,ll y,ll p)
{
	ll res = 1;
	while(y>0)
	{
		if(y&1)
			res=(x*res)%p;
		y = y>>1;
		x= (x*x)%p;
	}
	return res;
}*/
int main()
{
	FAST_IO;
	ll t,n,k;
	ll mod = 1000000007;

	cin >> t;
	while(t--)
	{
		ll count = 0;
		cin >> n >> k;
		ll m = 1;
		count  = (k-1)%mod;
		ll op = ((ll)((k-1)/(n-1)))%mod;
		ll t2,x;
		if(op%2==0)
		{
			x =op/2;
			t2 = (x%mod)*((op+1)%mod);
		}
		else
		{
			x = (op+1)/2;
			t2 = (op%mod)*(x%mod);
		}
		count = (count%mod+ (((op)%mod)*(((k-1)%mod)))%mod + mod -((t2%mod)*((n-1)%mod))%mod)%mod;
		/*if((k-1)%(n-1)!=0)
			count = (count+((k-1) - op*(n-1)));*/
		cout << (count%mod)%mod << endl;
	}

}