#include <bits/stdc++.h>
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
#define f first
#define s second
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;
using namespace std;
void add(ll arr[], ll N, ll lo, ll hi)
{
	arr[lo] += 1;
	if (hi != N - 1)
		arr[hi + 1] -= 1;
}

//  Utility method to get actual array from operation array
void update(ll arr[], ll N)
{
	//  convert array into prefix sum array
	for (ll i = 1; i < N; i++)
		arr[i] += arr[i - 1];
}
void submit(ll oid, string symbol ll price, ll qty) {

}
void cancel(ll oid) {

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	while (true)
	{
		string op;
		cin >> op;
		if (op == "END") {
			break;
		}
		if (op == "SUB")
		{
			cin >> oid >> symbol >> price >> qty;
			submit(oid  , symbol , price , qty)
		}
		if (op == "CXL") {
			ll oid;
			cin >> oid;
			cancel(oid);
		}

	}

}
