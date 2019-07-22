//ArraySUB SPOJ Solution To Do: Try using Segment Tree

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
 	ll n;
 	cin >> n;
 	ll arr[n];
 	ll k;

	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
//		v.push_back(x);
	}
	cin >> k;
	deque<ll> q;
	//combining stack and queue since we need to keep track of index as well
	//q.eb(0);
	//use sliding window or max histogram problem solving approach
	//histogram strategy
	vector<ll> out;
	for(ll i= 0 ;i<k;i++)
	{
		while(!q.empty() && arr[q.back()]<=arr[i])
		{
			q.popb();
		}
		q.eb(i);
	}
	for(ll i=k;i<n;i++)
	{
		out.eb(arr[q.front()]);

		while(!q.empty() && arr[q.back()]<=arr[i])
		{
			q.pop_back();
		}
		while(!q.empty() && q.front()<i-k+1) //or arr[i]<=i-k
		{
			q.popf();
		}
		q.eb(i);
		
	}
	if(!q.empty())
		out.eb(arr[q.front()]);

		for(ll i=0;i<out.size();i++)
		{
			cout << out[i] << " ";
		}
	
}


