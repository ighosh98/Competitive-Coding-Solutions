#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	string s;
	cin >> s;
	int x[n-1];

	for(int i = 0;i<n;i++)
	{
		x[i]=0;
	}
	for(int i=0;i<n-1;i++)
	{
		if(s[i] =='0')
		{
			x[i] = 0;
		}
		else
		{
			if(i==0)
			{
				x[i] = 1;
			}
			else
			{
				x[i]= x[i-1]+1;
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		int count =0;
		for(int j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
				count++;
		}
		if(count>x[i])
		{
		//	printf("%d>%d",count,x[i]);
			printf("NO\n");
			return 0;

		}
	}
	printf("YES\n");
	return 0;
}