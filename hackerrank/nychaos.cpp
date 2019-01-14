#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int arr[n];
		//final state of queue
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		int ans = 0,flag=1;
		for( int i = 0;i<n;i++)
		{
			if(arr[i]-(i+1) >2)
			{
				printf("Too chaotic\n");
				flag = 0;
			}
			else
			{

			for(int j = max(0,arr[i]-2);j<i;j++)	
			{
				if(arr[i]<arr[j])
				{
					//swap
					ans++;
				}
			}
			}
		}
		if(flag)
		{
			printf("%d\n",ans );
		}
	}
}