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
	ll t,n;
	string x;

	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> x;
		int count = 0;
		int attendence = 0;
		double check = 0;
		for(int i=0;i<n;i++)
		{
			if(x[i]=='P')
				attendence++;
		}
		for(int i=2;i<n-2;i++)
		{
			check = (double)((double)attendence/((double)n));
			//cout << attendence << endl;
			//cout << check

			if (check >= 0.75)
				break;		
			else if((x[i-1] == 'P' || x[i-2] == 'P') && (x[i+1] == 'P' || x[i+2]=='P') && (x[i]=='A'))
			{
				count++;
				attendence++;
			//	cout << "mar";
			}
		}
	//	cout << attendence << endl;

		check = (double)((double)attendence/((double)n));
	//	cout << check << endl;
		if (check < 0.75)
			cout << -1 << endl;
		else
		{
			cout << count << endl;
		}

	}

}