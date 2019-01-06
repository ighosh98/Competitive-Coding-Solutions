#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; // no of pages
	cin >> n;
	int a[7];
	int sum = 0;
	//int week = 0;
	int days = 0;
	for(int i = 0 ;i < 7; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
	
	{
		while(n > sum)
		{
			n-=sum;			
		}
		for(int i =0 ; n > 0  and i<7;i++)
		{
			n -= a[i];
			days++;		
		}
		cout << days << endl;
	}

}