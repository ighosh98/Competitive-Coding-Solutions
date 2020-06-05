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
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FAST_IO;
	ll t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		ll a = arr[0], b = 0;
		ll preva = a, prevb = 0;
		ll left = 0, right = n;
		bool alice = false;
		ll moves = 1;
		while (left < right)
		{
			ll temp = 0;
			right--;
			if (left < right)
				moves++;
			while ( (temp <= preva) && (left < right))
			{
				temp += arr[right--];
			}
			prevb = temp;
			b += temp;
			if (left == right)
				break;
			right++;
			temp = 0;
			left++;
			if (left < right)
				moves++;
			while (temp <= prevb && (left < right))
			{
				temp += arr[left++];
			}
			preva = temp;
			a += temp;
			if (left == right)
				break;
			left--;
		}
		cout << moves << " " << a << ' ' << b << endl;
	}
}
