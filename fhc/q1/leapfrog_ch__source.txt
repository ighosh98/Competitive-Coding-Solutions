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
	ll t,n;
	cin >> t;
	for(ll j = 1;j<=t;j++) 
	{
		string l;
		cin >> l;
		ll b = 0,dot = 0;
		for(int i=0;i<l.length();i++)
		{
			if(l[i]=='.')
				dot++;
			else if (l[i] == 'B')
			{
				b++;
			}

		}
		if(dot>=1 && b>=dot)
			{
				printf("Case #%lld: Y\n",j);
			}
		else
			printf("Case #%lld: N\n",j);
	}
}