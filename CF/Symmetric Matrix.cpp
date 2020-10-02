#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x;
        vector<vector<int>>a;
        for(int j=0;j<n;j++)
        {
             vector<int>b;
             for(int i=0;i<4;i++)
             {
                 cin>>x;
                 b.push_back(x);
             }
             a.push_back(b);
         }
         if(m%2!=0)
         {
             cout << "NO" << endl;
         }
         else
         {
            int f=0;
            for(int i=0;i<a.size();i++)
            {
                if(a[i][1]==a[i][2])
                {
                    cout << "YES" << endl;
                    f++;
                    break;
                }
            }
            if(f==0)
            {    
                 cout << "NO" << endl;
            }
         }
     }
}
