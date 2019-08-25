#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <sstream> 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define pi 2*acos(0.0)
#define rep(i,a,b) for(int i=a;i<b;++i)
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
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int,int> pii;
#define MAX 100001
vector<int>* sieve()
{
	bool isPrime[MAX];
	memset(isPrime,true,sizeof(isPrime));
	for(int i=2;i*i<=MAX;i++)
		{
			if(isPrime[i])
			{
				for(int j=i*i;j<MAX;j+=i)
				{
					isPrime[j] = false;

				}
			}
		}
	vector<int>* primes = new vector<int>();
	primes->eb(2);
	//print primes in a given range
	for(int i=3;i<MAX;i+=2)
	{
		if(isPrime[i])
		{
			primes->eb(i);
		}
	}
	return primes;
}
void printPrimes(ll l, ll r, vi* &primes)
{
	bool isPrime[r-l+1];
	memset(isPrime,true,sizeof(isPrime));
	for(int i=0;((ll)(ll)primes->at(i)*(ll)primes->at(i))<=r;i++)
	{ int currPrime = primes->at(i);
		ll base = (l/currPrime)*currPrime; // Base value:closest multiple of l
		//smaller or equal to l

		if(base<l)
		{
			base+=currPrime; // multiple of currPrime
		}
		//enters in
		for(ll j = base;j<=r;j+=currPrime)
		{
			isPrime[j-l] = false; //notprime
		}
			//if l/currPrime==0 send to currPrime(corner case)
		//case where base is itself a prime numer(Worth noting)
		if(base==currPrime)
		{
			isPrime[base-l] = true;
		}
	}
	//print out all primes
	for( ll i=0;i<=r-l;i++)
	{
		if(isPrime[i])
		{
			cout << i+l << endl;
		}
	}

}
int main()
{
	vi* primes = sieve();
	FAST_IO;
	ll t ;
	cin >> t;
	while(t--)
	{
		ll l,r ;
		cin >> l >> r;
		printPrimes(l,r,primes);
	}
	return 0;
}

