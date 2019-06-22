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
#define MAX 1000000000
//debuggers
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long  ll;

using namespace std;
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
ll findGCD(ll arr[], ll n,ll j) 
{ 
    ll result = 0; 
   // cout << arr[j] << "\t";
    for (ll i = 0; i < n; i++) 
        {
        	if(i==j)
        		i++;
        	if(result == 0 && i!=j)
        		{
        			result  = arr[i];
        			i++;
        	//		cout << result << " ";
        	//					cout << result << " ";
      		}
        	if(result!=0 && i!=j)
        		result = __gcd(result,arr[i]);
        }
      // cout << result << endl;
  
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
		ll a[n];
		for(ll i=0;i<n;i++)
			cin >> a[i];
	//	cout << "run";
		sort(a,a+n);
		ll maxm = 0;
		for(ll i=0;i<n;i++)
		{
			maxm = max(maxm,findGCD(a,n,i)+a[i]);
		}
		cout << maxm << endl;
	}
}
//number can have atmost 6 distinct prime factors
