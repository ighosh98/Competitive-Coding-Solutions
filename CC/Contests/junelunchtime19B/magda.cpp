#include <bits/stdc++.h>
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
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
//Allows to traverse any type of macro
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
//debuggers
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long int ll;
using namespace std;
int main()
{
	FAST_IO;
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n],b[n];
		for(ll i=0;i<n;i++)
		{
			cin >> a[i] ;
		}
		for(ll i=0;i<n;i++)
		{
			cin >> b[i] ;
		}
		ll height = 0;
		sort(a,a+n);
		sort(b,b+n);
		vector<ll> odda;
		vector<ll> evena;
		vector<ll> evenb;
		vector<ll> oddb;
		for(ll i=0;i<n;i++)
		{
			if(a[i]%2)
				odda.eb(a[i]);
			else
				evena.eb(a[i]);
		}
		for(ll i=0;i<n;i++)
		{
			if(b[i]%2)
				oddb.eb(b[i]);
			else
				evenb.eb(b[i]);
		}
		while((!(odda.empty()))&&(!(oddb.empty())))
		{
			height += ((odda.back()+oddb.back())/2);
			odda.popb();
			oddb.popb();
		}
		while((!(evena.empty()))&&(!(evenb.empty())))
		{
			height += ((evena.back()+ evenb.back())/2);
			evena.popb();
			evenb.popb();
		}
		if(!(evena.empty()))
		{

			if(!(oddb.empty()))
			{
			 	while((!(oddb.empty())) && (!(evena.empty())))
				{
					height+=((oddb.back()+evena.back())/2);
					evena.popb();
					oddb.popb();
				}
			}
		}
		else if (!(odda.empty()))
		{

			if(!(evenb.empty()))
			{
				while((!(evenb.empty())) && (!(odda.empty())))
				{
					height+=((evenb.back()+odda.back())/2);
					odda.popb();
					evenb.popb();
				}

			}
			
		}
				cout << height << endl;
			
		}
	}



