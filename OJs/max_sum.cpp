#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[n]
	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}
	int best = 0, sum = 0;
	for(int k = 0;k<n;k++)
	{
		sum = max(arr[k],sum+arr[k]); // sum at k-1 +arr[k]
		best = max(best,sum);
	}

}