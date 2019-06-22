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

bool disdig(ll i, ll k)
{
	ll arr[11] = {0};
	int count=0;
	while(i>0)
	{
		arr[i%10]++;
		i/=10;
	}
	while(k>0)
	{
		arr[k%10]++;
		k/=10;
	}
	for(int i=1;i<11;i++)
	{
		if(arr[i]!=0)
			count++;
	}
	if(count==2)
		return true;
	else
		return false;
}

int main()
{
	FAST_IO;
	ll t  ;
	cin >> t;
	ll mod = 1000000007;
	while(t--)
	{
		cin >> k;
		for(ll i=0;i<pow(10,k);i++)
		{
			if(disdig(i,k))
			{
				count++;
			}
		}
		cout << count << endl;
	}

}