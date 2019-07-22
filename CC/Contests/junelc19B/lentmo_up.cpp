#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(false)
#define make_pair make_pair
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front

//debuggers
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
int main()
{
	ll t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin >> a[i];
		ll k;
		cin >> k;
		ll x;
		cin >> x;
		ll modified[n];
		for(ll i = 0 ;i<n;i++)
		{
			modified[i] = (a[i]) ^ x;
		}
		ll sum = 0;
		for(ll i=0;i<n;i++)
		{
			sum+=a[i];
		}

		ll diff[n],prefixsum[n];
		ll count = 0,lesser = 0,neg=0;
		//Calculate prefix sum
		for(ll i=0;i<n;i++)
		{
			diff[i] = modified[i]-a[i];
			if(diff[i]>0)
				count++;
		}
		sort(diff,diff+n,greater<ll>());
		for(ll i=0;i<n;i++)
		{
				if(i==0)
			{
				prefixsum[0] = diff[0];
			}
			else
				prefixsum[i] = prefixsum[i-1]+diff[i];	
		}
		ll maxsum = 0;
		if(n==k)
		{
			cout <<  max(sum,sum+prefixsum[n-1]) << endl;
			continue;
		}
			//Why +2 for even and +1 for odd(We are taking groups of two for even for odd and groups of 1 in case of odd)
			/* Check the correctness proof: Here we are selecting a group whose prefix sum is maximized and 
			the remaining elements also get xor in the process. It is imp to note that there can be no other modification which gives a larger sum. 
			*/
			if(k%2 == 1)
			{
				for(ll i=1;i<=n;i++)
				{
					maxsum = max(maxsum,prefixsum[i-1]);
				}
				sum +=maxsum;
				//strategy suggested here is not correct imo

			}
			else 
			{
				maxsum = 0;
				for(ll i=2;i<=n;i+=2)
				{
					maxsum = max(maxsum,prefixsum[i-1]); 
				}
				sum +=maxsum;
			}

		cout << sum << endl;

	}
}
/* Explanantion:
for n>k
1. If k is odd: Sum of all positive diff[i] is your answer
Why? : You can always choose your k elements in such a way 
that all those elements with a positive diff are chosen even number of times
Corner case example n = k+1 
For every xor opn Choose all elements except 1 every time
As a result you can choose all elements even number of times
(even if all elements give a positive diff this is achievable(Think!))
2. If k is even: 
Case 1 : Number of diff is even : sum of positive numbers
(select pairs of two elements in every xor opn.
 We can ensure that all positive elements are selected exactly even number of times.)
number of diff >0 is odd  
Hence sum of all elements with positive diff is taken
then you remove the smallest positive number 
followed by removing smallest -ve number
max(positive sum+smallest_negative_number,positive sum+largest_negative_number) 
*/