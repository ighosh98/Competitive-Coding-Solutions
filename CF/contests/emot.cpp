/*Author :Indraneel Ghosh
Link : https://codeforces.com/contest/1117/problem/B*/
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
typedef unsigned long long ll;
using namespace std;

int main()
{
	FAST_IO;
	ll n,m,k;
	cin >> n >> m >> k;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	ll ans=0, temp = m;
	ll x = temp /(k+1);
	x *= (k+1);
	while(x>0)
	{
		ans += (arr[n-1]*k+arr[n-2]);
		x-=(k+1);
	}
	ll  y = temp%(k+1);
	ans += (arr[n-1]*y);
	cout << ans <<endl;
}