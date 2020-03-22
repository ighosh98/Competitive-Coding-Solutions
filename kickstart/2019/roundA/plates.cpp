//Problem link: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d40bb
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,p,t;
    cin >> t;
    for(int theta=1;theta<=t;theta++)
    {
        cin >> n >> m >> p;
        ll a[n][m];
        vector<vector<ll>>dp(n+1,vector<ll>(p+1,0));
        vector<ll>mark(n,0);

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
                {
                    cin >> a[j][k];
                    if(k>0)
                        a[j][k]+=a[j][k-1];
                }

        }
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                for(int k = 0;k+j+1<=p;k++)
                {
                    dp[i+1][k+j+1] = max(dp[i][k+j+1],dp[i+1][k+j+1]);
                    dp[i+1][k+j+1]=max(dp[i][k]+a[i][j],dp[i+1][k+j+1]);
                }
            }
        }
        // cout << endl;
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=p;j++)
        //         {
        //             cout << dp[i][j] <<" ";
        //         }
        //         cout << endl;
        // }
        cout << "Case #" << theta << ": " <<dp[n][p] << endl;
    }
}
