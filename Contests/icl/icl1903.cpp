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
	ll t,n,m,k ;
	FAST_IO;
	cin >> t;
	while(t--)
	{
		cin >> n >> m >> k;
		//ll candies = n %m;
		ll count = 0;
		if(n<m)
		{
			cout << "-1\n";
			//break;
		//	return 0;
		}
		else
		{

		while(n>0)
		{
			if(n%m !=0)
				{
					n -=k;
					count++;
					//cout << n;
				}
				else 
					break;
		}
		
		if(n>=0 && (n/m)>=1)
			cout << count << endl;
		else 
			cout << "-1\n";
	}
//	return 0;


	}


}