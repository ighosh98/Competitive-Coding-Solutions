#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  endl "\n"
#define eb emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define mp make_pair
typedef unsigned long long ll;
using namespace std;
// modular exponentiation
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;     
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 
int main()
{
    FAST_IO;
    ll t,ans,k;
    cin >> t;
    ll mod = 1000000007; 
    while(t--)
    {
        cin >> k;
        ans = (5*power(2,k,mod))%mod;
        cout << ans << endl;
    }
}