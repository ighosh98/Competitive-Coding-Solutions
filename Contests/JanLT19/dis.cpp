#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,x,j;
        cin>>n>>k;
        int d[n]={0},e[n]={0};
        for(i=0;i<k;i++)
        {
            int r,c;
            cin>>r>>c;
            d[r-1]=1;
            e[c-1]=1;
        }
        j=0;x=0;
        int a[n-k],b[n-k];
        for(i=0;i<n;i++)
        {
            if(d[i]==0)
            {
                a[j]=i+1;
                j++;
            }
            if(e[i]==0)
            {
                b[x]=i+1;
                x++;
            }
        }
        cout<<n-k<<" ";
        for(i=0;i<n-k;i++)
        {
            cout<<a[i]<<" "<<b[i]<<" ";
        }
        cout<<endl;
    }

}