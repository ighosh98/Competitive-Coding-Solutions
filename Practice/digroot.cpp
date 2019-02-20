//digital root
/* Author :Indraneel Ghosh
https://codeforces.com/contest/1107/problem/B*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll n,k,x;
cin >> n;	
	for(ll i=0;i<n;i++)
	{
		cin >> k >> x;
		cout << ((k-1)*9)+x << endl;
	}
return 0;
}
