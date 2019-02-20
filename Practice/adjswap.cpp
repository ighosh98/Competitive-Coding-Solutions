/*https://codeforces.com/contest/920/problem/C*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	string s;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	} 
	cin >> s;
	for(int i=0;i<n;i++)
	{
		while(i<n-1 && s[i]  =='0' )
			i++;
		int l = i;
		while(i<n-1 && s[i] == '1')
			i++;
		int r = i;
	//	printf("%d\t%d\n",l,r);
		if(l<r)
			{
				sort(arr+l,arr+r+1);
			}
	}
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			{
				printf("NO\n");
				return 0;
			}
	}
	printf("YES\n");
	return 0;
}
