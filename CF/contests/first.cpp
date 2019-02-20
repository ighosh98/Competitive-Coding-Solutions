/*https://codeforces.com/contest/1117/problem/A*/
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
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	ll max = 0;
	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	//cout << max;
	ll l[n];
	for(ll i=0;i<n;i++)
	{
		l[i] = 0;
	}
	if(arr[0]==max)
	{
		l[0] =1;
	}
	for(ll i=1;i<n;i++)
	{
		if(arr[i]==max)
		{
			l[i]=l[i-1]+1; 
		}
		else
		{
			l[i] = 0;
		}
	}
	sort(l,l+n);
	cout << l[n-1] << endl;
}