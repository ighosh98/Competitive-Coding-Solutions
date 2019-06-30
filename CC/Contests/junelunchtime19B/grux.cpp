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
	ll t,n,d;
	cin >> t;
	while(t--)
	{
		cin >> n >> d;
		ll a[n],b[n];
		for(ll i=0;i<n;i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		ll mid;
		if(n%2==0)
		{
			mid = b[(n+1)/2]+b[(n-1)/2];
		}
		else
		{
			mid = b[n/2];
		}
		ll count = 0;
		bool flag = true; 
		for(ll i=0;i<n;i++)
		{
			if((a[i]<=b[i] && b[i]<=mid) || (a[i]>b[i] && b[i]>mid))
			{
				if((abs(b[i]-a[i]))%d==0)
			{
				count+= (abs(b[i]-a[i]))/d;
			}
		}
			else
				flag = false;
		}

		if(count%2==0 && flag == true)
		{
			cout << (count/2) << endl;
		}
		else 
			cout << -1 << endl;


}

	}


