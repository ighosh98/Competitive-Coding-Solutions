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
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll dig(ll val)
{
	ll count = 0;
	while(val>0)
	{
		count+=(val%10);
		val/=10;
	}
	return count;
}
int main()
{
	FAST_IO;
	ll t;
	ll n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll count = 1;
		ll val = 20;

		while(count<n)
		{
			ll temp = dig(val);
			//cout << temp;
			if(temp%10==0)
				count++;
			if(count!=n)
				val++;
		}
		cout << val <<endl;
	}
}
