#include <bits/stdc++.h>
using namespace std;
int main()
{
	// for 2*2 we have (n-1)*(n-1) choices and so on
	int n;
	while(cin >> n && n!=0)
	{
		cout << ((n*(n+1)*(2*n+1))/6)<<"\n";
	}
}