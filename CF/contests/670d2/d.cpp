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
typedef long long ll;
int subtractTime(int land, int fly) {
	ll minLand = land % 100;
	ll hourLand = (land / 100) % 100;
	ll minFly = (fly) % 100;
	ll hourFly = (fly / 100) % 100;
	ll min, hour;

	if (minFly < minLand) {

		min = minFly - minLand + 60;
		hourFly--;
	}
	else {
		min = minFly - minLand;

	}
	hour = hourFly - hourLand;
	return hour * 100 + min;
}
int getMinGates(vector<int> landingTimes, vector<int> takeOffTimes, int maxWaitTime, int initialPlanes) {
	ll ans = initialPlanes, curr = initialPlanes;
	ll x = 0, y = 0;
	while (y < takeOffTimes.size() or x < landingTimes.size() ) {
		if (x == landingTimes.size())
			break;
		if (y == takeOffTimes.size()) {
			curr += landingTimes.size() - x;
			ans =  max(ans, curr);
			break;
		}
		if (landingTimes[x] < takeOffTimes[y]) {
			if (subtractTime(landingTimes[x], takeOffTimes[y]) > maxWaitTime) {
				curr++;
				ans = max(ans, curr);
			}
			else
				y++;
			x++;
		}
		else {
			if (curr > 0)
				curr--;
			y++;
		}
	}
	return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
