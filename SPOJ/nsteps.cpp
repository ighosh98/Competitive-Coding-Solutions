#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,ans;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> x >> y;
		if(y==x)
		{
			if(x%2 == 0)
				ans = 2*x;
			else
				ans = 2*x -1;
			// on line 1
			cout << ans <<"\n";
		} 
		else if(x-y == 2)
		{
			if(x%2 == 0)
			{
				ans = x+y;
			}
			else
				ans = x+y-1;
			cout << ans <<"\n";
			// on line 2
		}
		else
		{
			cout << "No Number\n";
		}
	}
		
}