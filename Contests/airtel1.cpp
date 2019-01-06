
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&(a[i])) ;
      if(a[i]%2 == 1)
            a[i]=1;
        else
            a[i]=-1;
      //      prlong long intf("%d\t",a[i]);
    }//array of choice is created
    //prlong long intf("\n");
    long long int sum = 0; //=arr[0];
    long long int cum[n+1];
    long long int count =0;
    cum[0]=0;
    for(long long int i=1;i<n+1;i++)//assign cumulative values
    {
        cum[i]=cum[i-1]+a[i-1];
       // cout << "i= "<< cum[i] << endl;
    }
    sort(cum,cum+(n+1));
    /*for(long long int i=0;i<n+1;i++)
        cout << cum[i]<<"\t";*/
    
    long long int ans[n+1];
    memset(ans, 0, sizeof(ans));
    long long int j=0;
    ans[0] =1;
    for(long long int i=1;i<n+1;i++)//after sorting it count the number of time each value occurs.
    //Your answer will be sum of nc2 time complexity= O(n)
    {
        if(cum[i]==cum[i-1])
        ans[j]++;
        else
        {
            j++;
            ans[j]++;
        }
    }
    long long int final =0;
for(long long int i=0;i<=j;i++)
{
    //cout << ans[i] << "\t";
    if(ans[i]>1)
        final+=((ans[i]*(ans[i]-1)/2));
}
printf("%lld",final);
return 0;
    
}
