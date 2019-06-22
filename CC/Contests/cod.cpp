#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
using namespace std;
int bins()
int main()
{
	int i,j;
	char ch[26];
	int check[26];
	for(i=97,j=0;i<123 && j<26;i++)
	{
		ch[j]= (char)(i);
		
		j++;
	}
	int tests;

	cin>>tests;
	int t;
	int sum[tests];
	for(t=0;t< tests;t++)
	{
		for(j=0;j<26;j++)
		{
			check[j]=0;
		}
		int price[26];
		sum[t]=0;
		for(i=0;i<26;i++)
		{
			cin >> price[i];
		}
		int arr[26] ;
		for(i=0;i<26;i++)
		{
			cin >> arr[i];
		}
		char input[50000];

		j=0;
		while(  input[j]>= 'a' && input[j] <= 'z')
		{
			cin>> input[j];
			if(bins(ch, input,j)!=0)
			{
				int k= input[j];
				check[k-97]=1;
			}
		}
		for(j=0;j<26;j++)
		{
			if(check[j]==0)
			{
				sum[t] += price[j];
			}
		}
	}
	for(t=0;t<tests;t++)
	{		
		cout << sum[t] << "\n";

	}

return 0;
}