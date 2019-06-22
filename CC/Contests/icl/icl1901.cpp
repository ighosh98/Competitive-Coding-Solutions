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
	FAST_IO;
	ll t,n,k;
	
	cin >> t;
	while(t--)
	{
		cin >> k >> n;
		ll f[10];
		for(ll i=0;i<10;i++)
		{
			f[i] = 0;
		}
		while(k>0)
		{
			f[k%10]++;
		//	cout <<  k%10 << " = "<< f[k%10]<< "\t";
			k/=10;

		}
		int flag = 0;
		if(f[0]==1)
		{
			flag = 0;
			for(int i=1;i<10;i++)
			{
				if(f[i] == 2)
				{
					cout << "4\n";
					flag = 1;
				}
				
			}
			if(!flag)
			{
				cout << "14\n";
			}
		}
		if(f[0] == 2)
		{
					cout << "4\n";
		}
		if(f[0]==0)
		{
			flag = 0;
			for(int i=1;i<10;i++)
			{
				if(f[i] == 3)
				{
					cout << "1\n";
					flag = 1;

				}
				else if(f[i]==2)
				{
					cout << "8\n";
					flag = 1;
				}
			}
		
	
			if(!flag)
			{
				cout << "27\n";
			}
		}

	}
}