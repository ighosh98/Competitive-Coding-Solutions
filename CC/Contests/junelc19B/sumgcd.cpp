#include <iostream>
#include <bits/stdc++.h>
#include <sstream> 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define pi 2*acos(0.0)
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
#define MAX 1000000000

typedef unsigned long long int ll;
using namespace std;

ll gcdseq(vector<ll> v,ll j)
{
	ll result = 0;
	for(ll i=0;i<v.size();i++)
		{
			if(j==i)
				continue;
			else
			{
				if(result==0)
					result = v[i];
				else if (result == 1)
					return result;
				else
					result  = __gcd(v[i],result);
			} 
		}
			return result;

}

int main()
{
	FAST_IO;
	ll t,n;

	cin >> t;
	while(t--)
	{
		cin >> n;
		ll a[n],ans = 0, max = 0;
		for(ll i=0;i<n;i++)
		{
			cin >> a[i];

		}
		sort(a,a+n);
		ll maxm=  0;
		vector<ll> v;
		for(ll i=0;i<n-1;i++)
		{
				if(a[i]==a[i+1])
					continue;
			else
			{
				v.eb(a[i]);
			}
		}
		v.eb(a[n-1]);
	/*	for(ll i=0;i<v.size();i++)
		{
			cout << v[i] << " ";
		}*/
//		cout << __gcd(99999999 ,66666666)

		
		if(v.size()==1)
			cout << v[0]*2 << endl;
		else
		{
			sort(v.begin(),v.end());
		
		for(ll i=v.size()-1;i>=(v.size()/2);i--)
		{
		//	cout << v[i] << " ";
			if(maxm< gcdseq(v,i)+v[i])
				maxm =  gcdseq(v,i)+v[i];
			else
				break;
			//maxm = max(maxm, gcdseq(a,n,i)+a[i]);
		}
		cout << maxm << endl;
	}
	}
	

}